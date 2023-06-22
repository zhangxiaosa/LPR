import os
import sys
import json
import subprocess
import shutil
import time
import datetime
import re
import argparse
import copy
import openai

# you need to add OPENAI_API_KEY to the environment variable
openai.api_key = os.getenv("OPENAI_API_KEY")

ROOT_FOLDER = os.getcwd()

PROGRAM_NAME = "small.c"
SCRIPT_NAME = "r.sh"
TOKEN_COUNTER = os.path.join(ROOT_FOLDER, "token_counter_deploy.jar")
PERSES = os.path.join(ROOT_FOLDER, "perses_deploy.jar")
LOG_FILE_NAME = "log.txt"
FORMATTER = "clang-format"


def execute_cmd(cmd, output=False):
    if output:
        process = subprocess.run(f"{cmd}", shell=True, check=False)
    else:
        process = subprocess.run(f"{cmd}", shell=True, stdout=subprocess.DEVNULL, 
                                 stderr=subprocess.DEVNULL, check=False)
    return process.returncode


def call_perses(output_folder, level):
    print_and_log(f"start perses", level=level)
    output_program_path = os.path.join(output_folder, PROGRAM_NAME)
    output_script_path = os.path.join(output_folder, SCRIPT_NAME)
    working_folder = os.path.join(output_folder, "perses")
    os.makedirs(working_folder, exist_ok=True)
    tmp_program_path = os.path.join(working_folder, PROGRAM_NAME)
    tmp_script_path = os.path.join(working_folder, SCRIPT_NAME)
    shutil.copy(output_program_path, tmp_program_path)
    shutil.copy(output_script_path, tmp_script_path)

    execute_cmd(
        f"java -jar {PERSES} --input {tmp_program_path} --test {tmp_script_path} --output-dir {working_folder}")

    call_formatter(tmp_program_path)
    shutil.copy(tmp_program_path, output_program_path)

    program_size = count_token(output_program_path)
    print_and_log(f"Finish perses: {program_size} tokens", level=level)


def call_gpt_with_multi_level_prompt(prompts, operation, output_folder, gpt_version, trail_number, level):

    tmp_folder = os.path.join(output_folder, f"{operation}")
    os.makedirs(tmp_folder, exist_ok=True)

    tmp_program_path = os.path.join(tmp_folder, PROGRAM_NAME)
    tmp_script_path = os.path.join(tmp_folder, SCRIPT_NAME)

    prompt_from_system = prompts["prompt_from_system"]
    operations = prompts["operations"]
    questions = operations[operation]["multi_level_question"]
    primary_question = questions["primary_question"]
    followup_question = questions["followup_question"]
    # ask the primary question
    start_time = time.time()

    # load the program
    program = load_program_file(tmp_program_path)

    # call gpt
    prompt_from_user = f"{primary_question}. The program is {program}."
    messages = [
        {"role": "system", "content": f"{prompt_from_system}"},
        {"role": "user", "content": f"{prompt_from_user}. The program is {program}."}
    ]
    completion = call_gpt(messages, gpt_version=gpt_version, trail_number=trail_number)
    end_time = time.time()

    # save prompt
    save_json_file(tmp_folder, "primary_question_prompt.json", messages)
    # save response
    save_json_file(tmp_folder, "primary_question_response.json", completion)

    # try multiple times to ensure the quality of target_list
    target_list = []
    for trail in range(trail_number):
        response_text = completion.choices[trail].message.content
        response_json = extract_json(response_text)
        if "target_list" in response_json:
            target_list = response_json["target_list"]
            if isinstance(target_list, list) and all(isinstance(item, str) for item in target_list):
                break

    # deduplicate
    target_list = list(set(target_list))

    print_and_log(f"Primary question finished in {end_time-start_time:.2f} seconds", level=level)
    print_and_log(f"Identified target list: {target_list}", level=level)

    # if no target identified, return
    if len(target_list) == 0:
        return

    # ask the followup question
    for target_id, target in enumerate(target_list):
        target_path = os.path.join(tmp_folder, f"target_{target_id}")

        # load the program
        program = load_program_file(tmp_program_path)

        start_time = time.time()

        # call gpt
        messages = [
            {"role": "system", "content": f"{prompt_from_system}"},
            {"role": "user", "content": f"{followup_question}. \
             The program is {program}. The target to be optimized is {target}."}
        ]
        completion = call_gpt(messages, gpt_version=gpt_version, trail_number=trail_number)
        end_time = time.time()
        print_and_log(f"Followup question for target ({target}) \
                      finished in {end_time-start_time:.2f} seconds", level=level)
        # save prompt
        save_json_file(target_path, "followup_question_prompt.json", messages)
        # save response
        save_json_file(target_path, "followup_question_response.json", completion)

        # save program
        for trail in range(trail_number):
            response_text = completion.choices[trail].message.content
            response_json = extract_json(response_text)
            if "program" in response_json and isinstance(response_json["program"], str):
                program = response_json["program"]
            else:
                print_and_log(f"invalid result for trail {trail}", level=level)
                program = ""

            trail_path = os.path.join(target_path, f"trail_{trail}")
            save_program_file(trail_path, program)
            shutil.copy(tmp_script_path, trail_path)

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
                print_and_log(f"trail {trail}: program size {size}, passed", level=level)
                if size < smallest_size:
                    smallest_size = size
                    smallest_program = program
            else:
                print_and_log(f"trail {trail}: program size {size}, failed", level=level)

        if smallest_program != "":
            save_program_file(tmp_folder, smallest_program)

        call_formatter(tmp_program_path)
        final_program_size = count_token(tmp_program_path)
        print_and_log(f"Finished gpt ({operation}), target ({target}).", level=level)
        print_and_log(f"Current size: {final_program_size} tokens", level=level)
    os.chdir(ROOT_FOLDER)

def call_gpt_with_single_level_prompt(prompts, operation, output_folder, gpt_version, trail_number, level):

    tmp_folder = os.path.join(output_folder, f"{operation}")
    os.makedirs(tmp_folder, exist_ok=True)

    tmp_program_path = os.path.join(tmp_folder, PROGRAM_NAME)
    tmp_script_path = os.path.join(tmp_folder, SCRIPT_NAME)

    prompt_from_system = prompts["prompt_from_system"]
    operations = prompts["operations"]
    question = operations[operation]["single_level_question"]

    # ask the single level question
    start_time = time.time()

    # load the program
    program = load_program_file(tmp_program_path)

    # call gpt
    prompt_from_user = f"{question}. The program is {program}."
    messages = [
        {"role": "system", "content": f"{prompt_from_system}"},
        {"role": "user", "content": f"{prompt_from_user}. The program is {program}."}
    ]
    completion = call_gpt(messages, gpt_version=gpt_version, trail_number=trail_number)
    end_time = time.time()
    print_and_log(f"Question finished in {end_time-start_time:.2f} seconds", level=level)

    # save prompt
    save_json_file(tmp_folder, "question_prompt.json", messages)
    # save response
    save_json_file(tmp_folder, "question_response.json", completion)

    # save program
    for trail in range(trail_number):
        response_text = completion.choices[trail].message.content
        response_json = extract_json(response_text)
        if "program" in response_json and isinstance(response_json["program"], str):
            program = response_json["program"]
        else:
            print_and_log(f"invalid result for trail {trail}", level=level)
            program = ""

        trail_path = os.path.join(tmp_folder, f"trail_{trail}")
        save_program_file(trail_path, program)
        shutil.copy(tmp_script_path, trail_path)

    # test all programs and return the smallest one
    smallest_program = ""
    smallest_size = sys.maxsize
    for trail in range(trail_number):
        trail_path = os.path.join(tmp_folder, f"trail_{trail}")
        program_path = os.path.join(trail_path, PROGRAM_NAME)

        size = count_token(program_path)
        program = load_program_file(program_path)

        os.chdir(trail_path)
        if property_test():
            print_and_log(f"trail {trail}: program size {size}, passed", level=level)
            if size < smallest_size:
                smallest_size = size
                smallest_program = program
        else:
            print_and_log(f"trail {trail}: program size {size}, failed", level=level)

    if smallest_program != "":
        save_program_file(tmp_folder, smallest_program)

    call_formatter(tmp_program_path)
    final_program_size = count_token(tmp_program_path)
    print_and_log(f"Finished gpt ({operation})).", level=level)
    print_and_log(f"Current size: {final_program_size} tokens", level=level)

def call_gpt_based_reducer(prompts, operation, output_folder, gpt_version, trail_number, multi_level, level):
    print_and_log(f"Start gpt ({operation})", level=level)

    output_program_path = os.path.join(output_folder, PROGRAM_NAME)
    output_script_path = os.path.join(output_folder, SCRIPT_NAME)
    tmp_folder = os.path.join(output_folder, f"{operation}")
    os.makedirs(tmp_folder, exist_ok=True)

    tmp_program_path = os.path.join(tmp_folder, PROGRAM_NAME)
    orig_program_path = os.path.join(tmp_folder, PROGRAM_NAME + ".orig")
    tmp_script_path = os.path.join(tmp_folder, SCRIPT_NAME)
    shutil.copy(output_program_path, tmp_program_path)
    shutil.copy(output_program_path, orig_program_path)
    shutil.copy(output_script_path, tmp_script_path)

    if multi_level:
        call_gpt_with_multi_level_prompt(prompts, operation, output_folder, gpt_version, trail_number, level)
    else:
        call_gpt_with_single_level_prompt(prompts, operation, output_folder, gpt_version, trail_number, level)

    tmp_program_path = os.path.join(tmp_folder, PROGRAM_NAME)
    final_program_size = count_token(tmp_program_path)
    shutil.copy(tmp_program_path, output_program_path)
    print_and_log(f"Finished gpt ({operation}): {final_program_size} tokens", level=level)


def call_renamer(output_folder, level):
    print_and_log(f"start renamer", level=level)
    output_program_path = os.path.join(output_folder, PROGRAM_NAME)
    output_script_path = os.path.join(output_folder, SCRIPT_NAME)
    tmp_folder = os.path.join(output_folder, "rename")
    os.makedirs(tmp_folder, exist_ok=True)
    tmp_program_path = os.path.join(tmp_folder, PROGRAM_NAME)
    tmp_script_path = os.path.join(tmp_folder, SCRIPT_NAME)
    shutil.copy(output_program_path, tmp_program_path)
    shutil.copy(output_script_path, tmp_script_path)

    os.chdir(tmp_folder)

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

    os.chdir(ROOT_FOLDER)
    shutil.copy(tmp_program_path, output_program_path)
    print_and_log(f"Finished renamer", level=level)


def property_test():
    for _ in range(5):
        ret = execute_cmd("./r.sh")
        if ret == 1:
            return False
    return True


def save_program_file(folder_path, program):
    os.makedirs(folder_path, exist_ok=True)
    file_path = os.path.join(folder_path, PROGRAM_NAME)
    with open(file_path, "w") as file_writer:
        file_writer.write(program)


def save_json_file(folder_path, file_name, json_object):
    os.makedirs(folder_path, exist_ok=True)
    file_path = os.path.join(folder_path, file_name)
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


def call_gpt(message, gpt_version, trail_number=1):
    completion = openai.ChatCompletion.create(
        model=gpt_version,
        n=trail_number,
        messages=message
    )

    return completion


def call_formatter(path):
    tmp_file = "tmp"
    execute_cmd(f"{FORMATTER} {path} > {tmp_file}", output=True)
    shutil.copy(tmp_file, path)


def count_token(program_path):
    output = subprocess.check_output(
        f"java -jar {TOKEN_COUNTER} -- {program_path}", shell=True)
    size_str = output.decode().splitlines()[-1]
    return int(size_str)


def extract_code(text):
    pattern = r"```[\S]*(.*?)```"
    result = re.findall(pattern, text, re.DOTALL)
    if result:
        return result[-1]
    return text


def extract_json(text):
    pattern = r"```json(.*?)```"
    result = re.findall(pattern, text, re.DOTALL)
    if len(result) != 0:
        json_string = result[-1]
        try:
            return json.loads(json_string)
        except json.JSONDecodeError:
            return {}
    else:
        return {}

def print_and_log(message, level):
    # make indentation
    indent = ""
    for i in range(level):
        indent = indent + "\t"

    # make time stamp
    now = datetime.datetime.now()
    time_string = now.strftime("%Y-%m-%d %H:%M:%S")
    message = f"{indent}[{time_string}] {message}"
    print(message)
    with open(LOG_FILE_NAME, 'a') as file:
        file.write(message + '\n')


def main():

    parser = argparse.ArgumentParser(description="Process some inputs.")

    # add arguments
    parser.add_argument("--prompts", type=str, required=True, help="Configuration file about prompts")
    parser.add_argument("--case", type=str, required=True, help="benchmark ID")
    parser.add_argument("--trail", type=int, required=True, help="Number of trials in GPT")
    parser.add_argument("--version", type=str, default="gpt-3.5-turbo-0613", help="GPT version")
    parser.add_argument("--multi_level", action="store_true", default=False, help="Enable multi-level prompt")

    # parse arguments
    args = parser.parse_args()

    # concat arguments into string for a unique id
    args_dict = copy.deepcopy(vars(args))
    args_dict.pop("case")
    args_string = '_'.join(f'{key}_{value}' for key, value in args_dict.items())
    pattern = re.compile(r'\W+')
    args_string = pattern.sub('_', args_string)

    prompt_file = args.prompts
    gpt_version = args.version
    case = args.case
    trail_number = args.trail
    multi_level = args.multi_level

    # get prompts
    prompts = load_json_file(prompt_file)

    # get current code version
    code_version = get_current_version()

    # generate trail id
    run_id = datetime.datetime.now().strftime("%Y%m%d%H%M%S")

    # get original folder
    original_folder = os.path.normpath(
        os.path.join(ROOT_FOLDER, "./benchmark/", case)
    )
    original_program_path = os.path.join(original_folder, PROGRAM_NAME)
    original_script_path = os.path.join(original_folder, SCRIPT_NAME)

    # get output folder
    main_folder = os.path.normpath(
        os.path.join(ROOT_FOLDER, "./result/", code_version + "_" + args_string, case, run_id)
    )
    os.makedirs(main_folder, exist_ok=True)
    shutil.copy(original_program_path, main_folder)
    shutil.copy(original_script_path, main_folder)

    global LOG_FILE_NAME
    LOG_FILE_NAME = os.path.join(main_folder, "log.txt")

    # start
    start_time = time.time()
    original_program_size = count_token(original_program_path)
    print_and_log(f"Start reduction, original program size: {original_program_size} tokens", level=0)
    iteration = 0

    program_size_before_iteration = sys.maxsize
    main_program_path = os.path.join(main_folder, PROGRAM_NAME)
    main_script_path = os.path.join(main_folder, SCRIPT_NAME)

    program_size_after_iteration = count_token(main_program_path)

    while program_size_after_iteration < program_size_before_iteration:
        print_and_log(f"Start iteration {iteration}", level=1)
        iteration_folder = os.path.join(main_folder, f"iteration_{iteration}")
        os.makedirs(iteration_folder, exist_ok=True)
        shutil.copy(main_program_path, iteration_folder)
        shutil.copy(main_script_path, iteration_folder)

        iteration_program_path = os.path.join(iteration_folder, PROGRAM_NAME)
        iteration_script_path = os.path.join(iteration_folder, SCRIPT_NAME)

        program_size_before_iteration = program_size_after_iteration
        smallest_program = load_program_file(main_program_path)

        # call gpt reducers
        operations = prompts["operations"]
        for operation in operations.keys():
            print_and_log(f"Start operation {operation}", level=2)
            operation_folder = os.path.join(iteration_folder, f"operation_{operation}")
            os.makedirs(operation_folder, exist_ok=True)
            shutil.copy(iteration_program_path, operation_folder)
            shutil.copy(iteration_script_path, operation_folder)
            operation_program_path = os.path.join(iteration_folder, PROGRAM_NAME)

            # call renamer
            call_renamer(operation_folder, level=2)

            # call gpt
            program_before_operation = load_program_file(operation_program_path)
            call_gpt_based_reducer(prompts=prompts, operation=operation,
                                   output_folder=operation_folder, gpt_version=gpt_version,
                                   trail_number=trail_number, multi_level=multi_level, level=2)
            program_after_operation = load_program_file(operation_program_path)

            # call perses
            if program_before_operation != program_after_operation:
                print_and_log("GPT made progress", level=2)
                call_perses(operation_folder, level=2)

            program_size_after_operation = count_token(operation_program_path)
            shutil.copy(operation_program_path, iteration_folder)
            print_and_log(f"Finished iteration {iteration}, operation {operation}, \
                          current size {program_size_after_operation}", level=2)

        program_size_after_iteration = count_token(iteration_folder)
        shutil.copy(iteration_program_path, main_folder)
        # Increase the iteration count
        iteration = iteration + 1

    end_time = time.time()
    save_program_file(main_folder, smallest_program)
    print_and_log(f"Finished reduction, reduction ratio: {program_size_before_iteration}/{original_program_size}\
                   time used: {end_time-start_time:.3f}", level=0)


def get_current_version():
    result = subprocess.run("git rev-parse --short HEAD", stdout=subprocess.PIPE, shell=True, text=True, check=False)
    version = result.stdout.strip()
    return version


if __name__ == "__main__":
    main()
