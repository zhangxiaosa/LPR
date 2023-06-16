import os
import sys
import json
import subprocess
import shutil
import time
import datetime
import re
import openai

# you need to add OPENAI_API_KEY to the environment variable
openai.api_key = os.getenv("OPENAI_API_KEY")

ROOT_DIR = os.getcwd()

PROGRAM_NAME = "small.c"
SCRIPT_NAME = "r.sh"
CASE = "clang-27747"
CONFIGURATION_FILE = "configuration.json"
GPT_VERSION = "gpt-3.5-turbo-0613"


def execute_cmd(cmd):
    process = subprocess.run(
        f"{cmd}", shell=True, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL, check=False)
    return process.returncode


def call_perses(iteration, output_folder):
    print(f"Iteration {iteration}, start perses")
    print_timestamp()

    output_program_path = os.path.join(output_folder, PROGRAM_NAME)
    output_script_path = os.path.join(output_folder, SCRIPT_NAME)
    tmp_dir = os.path.join(output_folder, f"iteration_{iteration}_perses")
    os.makedirs(tmp_dir, exist_ok=True)
    tmp_program_path = os.path.join(tmp_dir, PROGRAM_NAME)
    tmp_script_path = os.path.join(tmp_dir, SCRIPT_NAME)
    shutil.copy(output_program_path, tmp_program_path)
    shutil.copy(output_script_path, tmp_script_path)

    execute_cmd(
        f"java -jar perses_deploy.jar --input {tmp_program_path} --test {tmp_script_path} --output-dir {tmp_dir}")

    call_formatter(tmp_program_path)
    shutil.copy(tmp_program_path, output_folder)

    program_size = count_token(output_program_path)
    print(f"Iteration {iteration}, finish perses: {program_size} tokens")
    print_timestamp()


def call_gpt_based_reducer(configuration, operation, iteration, output_folder, trail_number):
    print(f"Iteration {iteration}, start gpt ({operation})")
    print_timestamp()

    output_program_path = os.path.join(output_folder, PROGRAM_NAME)
    output_script_path = os.path.join(output_folder, SCRIPT_NAME)
    working_dir = os.path.join(
        output_folder, f"iteration_{iteration}_gpt_{operation}")
    os.makedirs(working_dir, exist_ok=True)
    main_program_path = os.path.join(working_dir, PROGRAM_NAME)
    orig_program_path = os.path.join(working_dir, PROGRAM_NAME + ".orig")
    main_script_path = os.path.join(working_dir, SCRIPT_NAME)
    shutil.copy(output_program_path, main_program_path)
    shutil.copy(output_program_path, orig_program_path)
    shutil.copy(output_script_path, main_script_path)

    prompt_from_system = configuration["prompt_from_system"]
    operations = configuration["operations"]
    questions = operations[operation]
    primary_question = questions["primary_question"]
    followup_question = questions["followup_question"]

    # ask the primary question
    start_time = time.time()

    # load the program
    program = load_program_file(main_program_path)

    # call gpt
    prompt_from_user = f"{primary_question}. The program is {program}."
    messages = [
        {"role": "system", "content": f"{prompt_from_system}"},
        {"role": "user", "content": f"{prompt_from_user}. The program is {program}."}
    ]
    completion = call_gpt(messages, trail_number=trail_number)
    end_time = time.time()

    # save prompt
    save_json_file(working_dir, "primary_question_prompt.json", messages)
    # save response
    save_json_file(working_dir, "primary_question_response.json", completion)

    # try multiple times to ensure the quality of target_list
    target_list = []
    for trail in range(trail_number):
        response_text = completion.choices[trail].message.content
        response_json = extract_json(response_text)
        if "target_list" in response_json:
            target_list = response_json["target_list"]
            break
    
    print(f"Primary question finished in {end_time-start_time:.2f} seconds")
    print(f"Identified target list: {target_list}")
    
    # if no target identified, return
    if len(target_list) == 0:
        return

    # ask the followup question
    for target_id, target in enumerate(target_list):
        target_path = os.path.join(working_dir, f"target_{target_id}")

        # load the program
        program = load_program_file(main_program_path)

        start_time = time.time()

        # call gpt
        messages = [
            {"role": "system", "content": f"{prompt_from_system}"},
            {"role": "user", "content": f"{followup_question}. \
             The program is {program}. The target to be optimized is {target}."}
        ]
        completion = call_gpt(messages, trail_number=trail_number)
        end_time = time.time()
        print(
            f"Followup question for target {target_id} finished in {end_time-start_time:.2f} seconds")
        # save prompt
        save_json_file(target_path, "followup_question_prompt.json", messages)
        # save response
        save_json_file(
            target_path, "followup_question_response.json", completion)

        # save program
        for trail in range(trail_number):
            response_text = completion.choices[trail].message.content
            response_json = extract_json(response_text)
            if response_json and "program" in response_json:
                program = response_json["program"]
            else:
                print(f"invalid result for trail {trail}")
                program = ""

            trail_path = os.path.join(target_path, f"trail_{trail}")
            save_program_file(trail_path, program)
            shutil.copy(main_script_path, trail_path)

    # test all programs and return the smallest one
    smallest_program = ""
    smallest_size = sys.maxsize
    for trail in range(trail_number):
        trail_path = os.path.join(target_path, f"trail_{trail}")
        program_path = os.path.join(trail_path, PROGRAM_NAME)

        size = count_token(program_path)
        program = load_program_file(program_path)

        os.chdir(trail_path)
        if property_test():
            print(f"trail {trail}: program size {size}, passed")
            if size < smallest_size:
                smallest_size = size
                smallest_program = program
        else:
            print(f"trail {trail}: program size {size}, failed")

    os.chdir(ROOT_DIR)
    if smallest_program != "":
        save_program_file(main_program_path, smallest_program)

    final_program_size = count_token(main_program_path)
    print(
        f"Iteration {iteration}, finish gpt ({operation}): {final_program_size} tokens")
    print_timestamp()


def property_test():
    ret = execute_cmd("./r.sh")
    return ret == 0


def save_program_file(dir_path, program):
    os.makedirs(dir_path, exist_ok=True)
    file_path = os.path.join(dir_path, PROGRAM_NAME)
    with open(file_path, "w") as file_writer:
        file_writer.write(program)


def save_json_file(dir_path, file_name, json_object):
    os.makedirs(dir_path, exist_ok=True)
    file_path = os.path.join(dir_path, file_name)
    with open(file_path, "w") as file_writer:
        json.dump(json_object, file_writer)


def load_program_file(path):
    with open(path, "r") as file_reader:
        program = file_reader.read()
    return program


def load_json_file(path):
    with open(path, "r") as file_reader:
        json_object = json.load(file_reader)
    return json_object


def call_gpt(message, trail_number=1):
    completion = openai.ChatCompletion.create(
        model=GPT_VERSION,
        n=trail_number,
        messages=message
    )

    return completion


def call_formatter(path):
    execute_cmd(f"clang-format {path} > tmp.c")
    shutil.copy("tmp.c", path)


def call_renamer(iteration, output_folder):
    print(f"Iteration {iteration}, start renamer")
    print_timestamp()

    output_program_path = os.path.join(output_folder, PROGRAM_NAME)
    output_script_path = os.path.join(output_folder, SCRIPT_NAME)
    tmp_dir = os.path.join(output_folder, f"iteration_{iteration}_renamer")
    os.makedirs(tmp_dir, exist_ok=True)
    tmp_program_path = os.path.join(tmp_dir, PROGRAM_NAME)
    tmp_script_path = os.path.join(tmp_dir, SCRIPT_NAME)
    shutil.copy(output_program_path, tmp_program_path)
    shutil.copy(output_script_path, tmp_script_path)

    os.chdir(tmp_dir)

    execute_cmd(
        f"creduce --no-default-passes \
        --add-pass pass_clex rename-toks 1 \
        --add-pass pass_clang rename-fun 1 \
        --add-pass pass_clang rename-param 1 \
        --add-pass pass_clang rename-var 1 \
        --add-pass pass_clang rename-class 1 \
        --add-pass pass_clang rename-cxx-method 1 \
        {SCRIPT_NAME} {PROGRAM_NAME}"
    )

    os.chdir(ROOT_DIR)
    shutil.copy(tmp_program_path, output_program_path)
    program_size = count_token(output_program_path)
    print(f"Iteration {iteration}, finish renamer: {program_size} tokens")
    print_timestamp()


def print_timestamp():
    now = datetime.datetime.now()
    time_string = now.strftime("%Y-%m-%d %H:%M:%S")
    print(time_string)


def count_token(program_path):
    output = subprocess.check_output(
        f"java -jar token_counter_deploy.jar -- {program_path}", shell=True)
    size_str = output.decode().splitlines()[-1]
    return int(size_str)


def extract_code(text):
    pattern = r"```[\S]*(.*?)```"
    result = re.findall(pattern, text, re.DOTALL)
    if result:
        return result[-1]
    else:
        return text


def extract_json(text):
    pattern = r"```json(.*?)```"
    result = re.findall(pattern, text, re.DOTALL)
    if len(result) != 0:
        json_string = result[-1]
        return json.loads(json_string)
    else:
        return {}
    


def main():
    start_time = time.time()

    # get configuration
    configuration = load_json_file("configuration.json")

    # get current code version
    version = get_current_version()

    # generate trail id
    run_id = datetime.datetime.now().strftime("%Y%m%d%H%M%S")
    trail_number = 3

    # get original folder
    original_folder = os.path.normpath(
        os.path.join(ROOT_DIR, "./benchmark/", CASE)
    )
    original_program_path = os.path.join(original_folder, PROGRAM_NAME)
    original_script_path = os.path.join(original_folder, SCRIPT_NAME)

    # get output folder
    output_folder = os.path.normpath(
        os.path.join(ROOT_DIR, "./result/", version, CASE, run_id)
    )
    os.makedirs(output_folder, exist_ok=True)
    shutil.copy(original_program_path, output_folder)
    shutil.copy(original_script_path, output_folder)

    # start
    iteration = 0

    last_program_size = sys.maxsize
    output_program_path = os.path.join(output_folder, PROGRAM_NAME)
    current_program_size = count_token(output_program_path)

    while current_program_size < last_program_size:
        last_program_size = current_program_size

        # call renamer
        call_renamer(iteration, output_folder)

        # call gpt reducers
        operations = configuration["operations"]
        for operation in operations.keys():
            call_gpt_based_reducer(configuration=configuration, operation=operation,
                                   iteration=iteration, output_folder=output_folder, trail_number=trail_number)

        # call perses
        call_perses(iteration, output_folder)

        current_program_size = count_token(output_program_path)
        # Increase the iteration count
        iteration = iteration + 1

    end_time = time.time()
    print(
        f"Final program size: {current_program_size}, time used: {end_time-start_time:.3f}")


def get_current_version():
    result = subprocess.run("git rev-parse --short HEAD",
                            stdout=subprocess.PIPE, shell=True, text=True, check=False)
    version = result.stdout.strip()
    return version


if __name__ == "__main__":
    main()
