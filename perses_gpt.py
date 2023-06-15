import os
import sys
import openai
import subprocess
import shutil
import time
import tempfile
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

def call_gpt(configuration, iteration, operation, output_folder, candidate_number):
    print(f"Iteration {iteration}, start gpt ({operation})")
    print_timestamp()
    prompt_from_system = configuration['prompt_from_system']
    operation_list = configuration['operation_list']
    
    output_program_path = os.path.join(output_folder, program_name)
    output_script_path = os.path.join(output_folder, script_name)
    tmp_dir = os.path.join(output_folder, f"iteration_{iteration}_gpt_{operation}")
    os.makedirs(tmp_dir, exist_ok=True)
    tmp_program_path = os.path.join(tmp_dir, program_name)
    tmp_program_orig_path = os.path.join(tmp_dir, program_name + ".orig")
    tmp_script_path = os.path.join(tmp_dir, script_name)
    shutil.copy(output_program_path, tmp_program_path)
    shutil.copy(output_program_path, tmp_program_orig_path)
    shutil.copy(output_script_path, tmp_script_path)

    prompt_from_user = operation_list[operation]

    # load the program
    with open(tmp_program_path, "r") as f:
        program = f.read()

    start_time = time.time()
    completion = openai.ChatCompletion.create(
        model="gpt-3.5-turbo-0613",
        n=candidate_number,
        messages=[
            {"role": "system", "content": f"{prompt_from_system}"},
            {"role": "user", "content": f"{prompt_from_user}. {program}"}
        ]
    )

    end_time = time.time()
    print(f"gpt returned in {end_time-start_time:.2f} seconds")

    property_test_record = []
    program_size_record = []
    program_path_record = []
    for id in range(candidate_number):
        print(f"candidate {id}")
        # write the output program
        candidate_program_path = os.path.join(tmp_dir, f"candidate_{id}_" + program_name)
        program_path_record.append(candidate_program_path)
        response = completion.choices[id].message
        with open(candidate_program_path, "w") as f:
            extracted_program = extract_code(response.content)
            f.write(extracted_program)
        call_formatter(candidate_program_path)
        program_size = countToken(candidate_program_path)
        program_size_record.append(program_size)
        print(f"program size: {program_size} tokens")

        # property test
        os.chdir(tmp_dir)
        property_test_dir = tempfile.mkdtemp()
        os.chdir(property_test_dir)
        shutil.copy(candidate_program_path, program_name)
        shutil.copy(tmp_script_path, script_name)
        print(f"start property test")
        ret = execute_cmd("./r.sh")
    
        os.chdir(root_dir)
        if ret == 0:
            print("property test passed")
            property_test_record.append("pass")
        else:
            print("property test failed")
            property_test_record.append("fail")
        os.chdir(root_dir)

    # find the smallest passing program
    smallest_passing_candidate_id = -1
    smallest_passing_program_size = sys.maxsize
    for i in range(candidate_number):
        if (property_test_record[i] == "pass" and program_size_record[i] < smallest_passing_program_size):
            smallest_passing_candidate_id = i
            smallest_passing_program_size = program_size_record[i]
    if (smallest_passing_candidate_id is not -1):
        shutil.copy(program_path_record[smallest_passing_candidate_id], output_program_path)
    final_program_size = countToken(output_program_path)
    print(f"Iteration {iteration}, finish gpt ({operation}): {final_program_size} tokens")
    print_timestamp()

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

def main():
    start_time = time.time()
    
    # get configuration
    with open(configuration_file, 'r') as file:
        configuration = json.load(file)
    
    prompt_from_system = configuration['prompt_from_system']
    operation_list = configuration['operation_list']

    # get current code version
    result = subprocess.run("git rev-parse --short HEAD", stdout=subprocess.PIPE, shell=True, text=True)
    version = result.stdout.strip()

    # generate trail id
    trail_id = datetime.datetime.now().strftime("%Y%m%d%H%M%S")
    candidate_number = 3

    # get original folder
    original_folder = os.path.normpath(
        os.path.join(root_dir, "./benchmark/", case)
    )
    original_program_path = os.path.join(original_folder, program_name)
    original_script_path = os.path.join(original_folder, script_name)

    # get output folder
    output_folder = os.path.normpath(
        os.path.join(root_dir, "./result/", version, case, trail_id)
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

        # typedef
        call_gpt(configuration, iteration, "typedef", output_folder, candidate_number)

        # function inlining
        call_gpt(configuration, iteration, "function_inlining", output_folder, candidate_number)

        # constant propagation
        call_gpt(configuration, iteration, "constant_propagation", output_folder, candidate_number)

        # call perses
        call_perses(iteration, output_folder)

        current_program_size = countToken(output_program_path)
        # Increase the iteration count
        iteration = iteration + 1

    end_time = time.time()
    print(f"Final program size: {current_program_size}, time used: {end_time-start_time:.3f}")
    


if __name__ == "__main__":
    main()
