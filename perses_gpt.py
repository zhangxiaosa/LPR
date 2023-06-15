import enum
import os
import sys
import openai
import subprocess
import shutil
import time
import datetime
import re
import json

# you need to add OPENAI_API_KEY to the environment variable
openai.api_key = os.getenv("OPENAI_API_KEY")

root_dir = os.getcwd()

program_name = "small.c"
script_name = "r.sh"
case = "clang-27747"
configuration_file = "configuration.json"
gpt_version = "gpt-3.5-turbo-0613"

def execute_cmd(cmd):
    process = subprocess.run(f"{cmd}", shell=True, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
    return process.returncode

def call_perses(iteration, output_folder):
    print(f"Iteration {iteration}, start perses")
    print_timestamp()

    output_program_path = os.path.join(output_folder, program_name)
    output_script_path = os.path.join(output_folder, script_name)
    tmp_dir = os.path.join(output_folder, f"iteration_{iteration}_perses")
    os.makedirs(tmp_dir, exist_ok=True)
    tmp_program_path = os.path.join(tmp_dir, program_name)
    tmp_script_path = os.path.join(tmp_dir, script_name)
    shutil.copy(output_program_path, tmp_program_path)
    shutil.copy(output_script_path, tmp_script_path)
    
    execute_cmd(f"java -jar perses_deploy.jar --input {tmp_program_path} --test {tmp_script_path} --output-dir {tmp_dir}")

    call_formatter(tmp_program_path)
    shutil.copy(tmp_program_path, output_folder)

    program_size = countToken(output_program_path)
    print(f"Iteration {iteration}, finish perses: {program_size} tokens")
    print_timestamp()

def call_gpt_based_reducer(prompt_from_system, questions, iteration, operation, output_folder, trail_number):
    print(f"Iteration {iteration}, start gpt ({operation})")
    print_timestamp()
    
    output_program_path = os.path.join(output_folder, program_name)
    output_script_path = os.path.join(output_folder, script_name)
    working_dir = os.path.join(output_folder, f"iteration_{iteration}_gpt_{operation}")
    os.makedirs(working_dir, exist_ok=True)
    main_program_path = os.path.join(working_dir, program_name)
    orig_program_path = os.path.join(working_dir, program_name + ".orig")
    main_script_path = os.path.join(working_dir, script_name)
    shutil.copy(output_program_path, main_program_path)
    shutil.copy(output_program_path, orig_program_path)
    shutil.copy(output_script_path, main_script_path)

    primary_question = questions["primary_question"]
    followup_question = questions["followup_question"]

    # ask the primary question
    start_time = time.time()

    # load the program
    program = load_program_file(main_program_path)
    
    # call gpt
    prompt_from_user = f"{primary_question}. The program is {program}."
    messages=[
        {"role": "system", "content": f"{prompt_from_system}"},
        {"role": "user", "content": f"{prompt_from_user}. The program is {program}."}
    ]
    completion = call_gpt(messages, trail_number=1)

    response_text = completion.choices[0].message.content
    response_json = extract_json(response_text)
    target_list = response_json["target_list"]
    end_time = time.time()
    print(f"Primary question finished in {end_time-start_time:.2f} seconds")
    print(f"Identified target list: {target_list}")

    # save prompt
    save_json_file(working_dir, "primary_question_prompt.json", messages)
    # save response
    save_json_file(working_dir, "primary_question_response.json", completion)

    # ask the followup question
    for target_id, target in enum(target_list):
        
        # load the program
        program = load_program_file(main_program_path)

        start_time = time.time()
        
        # call gpt
        messages=[
            {"role": "system", "content": f"{prompt_from_system}"},
            {"role": "user", "content": f"{followup_question}. The program is {program}. The target to be optimized is {target}."}
        ]
        completion = call_gpt(messages, trail_number=trail_number)
        end_time = time.time()
        print(f"Followup question for target {target_id} finished in {end_time-start_time:.2f} seconds")

        target_path = os.path.join(working_dir, f"target_{target_id}")

        # save program
        for trail in range(trail_number):
            response_text = completion.choices[trail].message.content
            response_json = extract_json(response_text)
            program = response_json["program"]

            trail_path = os.path.join(target_path, f"trail_{trail}")
            save_program_file(trail_path, program)
            shutil.copy(main_script_path, trail_path)
        
        # save prompt
        save_json_file(target_path, "followup_question_prompt.json", messages)
        # save response
        save_json_file(target_path, "followup_question_response.json", completion)

    # test all programs and return the smallest one
    smallest_program = ""
    smallest_size = sys.maxsize
    for trail in range(trail_number):
        trail_path = os.path.join(target_path, f"trail_{trail}")
        program_path = os.path.join(trail_path, program_name)

        size = countToken(program_path)
        program = load_program_file(program_path)

        os.chdir(trail_path)
        if (property_test()):
            print(f"trail {trail}: program size {size}, passed")
            if (size < smallest_size):
                smallest_size = size
                smallest_program = program
        else:
            print(f"trail {trail}: program size {size}, failed")

    if (smallest_program is not ""):
        save_program_file(main_program_path, smallest_program)

    final_program_size = countToken(main_program_path)
    print(f"Iteration {iteration}, finish gpt ({operation}): {final_program_size} tokens")
    print_timestamp()

def property_test():
    ret = execute_cmd("./r.sh")
    return (ret is 0)

def save_program_file(dir_path, program):
    os.makedirs(dir_path, exist_ok=True)
    file_path = os.path.join(dir_path, program_name)
    with open(file_path, "w") as f:
        f.write(program)

def save_json_file(dir_path, file_name, json_object):
    os.makedirs(dir_path, exist_ok=True)
    file_path = os.path.join(dir_path, file_name)
    with open(file_path, "w") as f:
        json.dump(json_object, f)

def load_program_file(path):
    with open(path, "r") as f:
        program = f.read()
    return program

def load_json_file(path):
    with open(path, 'r') as f:
        json_object = json.load(f)
    return json_object

def call_gpt(message, trail_number=1):
    completion = openai.ChatCompletion.create(
        model=gpt_version,
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

    output_program_path = os.path.join(output_folder, program_name)
    output_script_path = os.path.join(output_folder, script_name)
    tmp_dir = os.path.join(output_folder, f"iteration_{iteration}_renamer")
    os.makedirs(tmp_dir, exist_ok=True)
    tmp_program_path = os.path.join(tmp_dir, program_name)
    tmp_script_path = os.path.join(tmp_dir, script_name)
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
        {script_name} {program_name}"
    )

    os.chdir(root_dir)
    shutil.copy(tmp_program_path, output_program_path)
    program_size = countToken(output_program_path)
    print(f"Iteration {iteration}, finish renamer: {program_size} tokens")
    print_timestamp()

def print_timestamp():
    now = datetime.datetime.now()
    time_string = now.strftime("%Y-%m-%d %H:%M:%S")
    print(time_string)

def countToken(program_path):
    output = subprocess.check_output(f"java -jar token_counter_deploy.jar -- {program_path}", shell=True)
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
    json_string = result[-1]
    return json.loads(json_string)

def main():
    start_time = time.time()
    
    # get configuration
    configuration = load_json_file()

    # get current code version
    version = get_current_version()

    # generate trail id
    run_id = datetime.datetime.now().strftime("%Y%m%d%H%M%S")
    trail_number = 3

    # get original folder
    original_folder = os.path.normpath(
        os.path.join(root_dir, "./benchmark/", case)
    )
    original_program_path = os.path.join(original_folder, program_name)
    original_script_path = os.path.join(original_folder, script_name)

    # get output folder
    output_folder = os.path.normpath(
        os.path.join(root_dir, "./result/", version, case, run_id)
    )
    os.makedirs(output_folder, exist_ok=True)
    shutil.copy(original_program_path, output_folder)
    shutil.copy(original_script_path, output_folder)
    
    # start
    iteration = 0

    last_program_size = sys.maxsize
    output_program_path = os.path.join(output_folder, program_name)
    current_program_size = countToken(output_program_path)
    

    while current_program_size < last_program_size:
        last_program_size = current_program_size

        # call renamer
        call_renamer(iteration, output_folder)

        # call gpt reducers
        prompt_from_system = configuration['prompt_from_system']
        operation_list = configuration['operation_list']
        for operation, questions in operation_list:
            call_gpt_based_reducer(prompt_from_system, questions, iteration=iteration, output_folder=output_folder, trail_number=trail_number)

        # call perses
        call_perses(iteration, output_folder)

        current_program_size = countToken(output_program_path)
        # Increase the iteration count
        iteration = iteration + 1

    end_time = time.time()
    print(f"Final program size: {current_program_size}, time used: {end_time-start_time:.3f}")

def get_current_version():
    result = subprocess.run("git rev-parse --short HEAD", stdout=subprocess.PIPE, shell=True, text=True)
    version = result.stdout.strip()
    return version
    

if __name__ == "__main__":
    main()
