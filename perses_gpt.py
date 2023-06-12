import os
import sys
import openai
import subprocess
import shutil
import time
import tempfile
import datetime

# you need to add OPENAI_API_KEY to the environment variable
openai.api_key = os.getenv("OPENAI_API_KEY")

root_dir = os.getcwd()

program_name = "small.c"
script_name = "r.sh"
case = "clang-27137"

original_folder = os.path.join(root_dir, "./benchmark/", case)
original_program_path = os.path.join(original_folder, program_name)
original_script_path = os.path.join(original_folder, script_name)

output_folder = os.path.join(root_dir, "./benchmark_result/", case)
output_program_path = os.path.join(output_folder, program_name)
output_script_path = os.path.join(output_folder, script_name)


prompt_from_system = "You are an assistant for source-to-source program transformations and modifications. \
Please make the specific changes on the program as instructed, without altering anything else. \
Please firstly give your step by step analysis and explanation, and finally give the whole output program wrapped by ```."

operation_list = {
    "typedef": "Given the following program, select any typedef, eliminate it, and substitute every instance of this alias with its associated original data type.",
    "function_inlining": "Given the following program, select the simplest function (except main), inline it and remove the original declaration and definition.",
    "constant_propagation": "Given the following program, select any variable that you think redundant, optimize it."
}

def execute_cmd(cmd):
    process = subprocess.run(f"{cmd}", shell=True)
    return process.returncode

def call_perses(iteration: int):
    print(f"Iteration {iteration}, start perses")
    print_timestamp()

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

def call_gpt(iteration, operation):
    print(f"Iteration {iteration}, start gpt")
    print_timestamp()

    tmp_dir = os.path.join(output_folder, f"iteration_{iteration}_gpt_{operation}")
    os.makedirs(tmp_dir, exist_ok=True)
    tmp_program_path = os.path.join(tmp_dir, program_name)
    tmp_script_path = os.path.join(tmp_dir, script_name)
    shutil.copy(output_program_path, tmp_program_path)
    shutil.copy(output_script_path, tmp_script_path)

    prompt_from_user = operation_list[operation]

    # load the program
    with open(tmp_program_path, "r") as f:
        program = f.read()

    start_time = time.time()
    completion = openai.ChatCompletion.create(
        model="gpt-3.5-turbo-0301",
        messages=[
            {"role": "system", "content": f"{prompt_from_system}"},
            {"role": "user", "content": f"{prompt_from_user}. {program}"}
        ]
    )

    response = completion.choices[0].message
    end_time = time.time()
    print(f"gpt returned in {end_time-start_time} seconds")

    # write back the inlined program
    with open(tmp_program_path, "w") as f:
        f.write(response.content)
    call_formatter(tmp_program_path)

    # property test
    os.chdir(tmp_dir)
    ret = execute_cmd("./r.sh")
    
    os.chdir(root_dir)
    if ret == 0:
        print("property test passed")
        shutil.copy(tmp_program_path, output_program_path)
    else:
        print("property test failed")
        exit(1)

    os.chdir(root_dir)

    program_size = countToken(output_program_path)
    print(f"Iteration {iteration}, finish gpt ({operation}): {program_size} tokens")
    print_timestamp()

def call_formatter(path):
    execute_cmd(f"clang-format {path} > tmp.c")
    shutil.copy("tmp.c", path)

def call_renamer(iteration, program_path, script_path):
    print(f"Iteration {iteration}, start renamer")
    print_timestamp()

    with tempfile.TemporaryDirectory() as tmp_dir:

        shutil.copy(program_path, os.path.join(tmp_dir, program_name))
        shutil.copy(script_path, os.path.join(tmp_dir, script_name))

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

        shutil.copy(program_name, program_path)

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


def main():
    os.makedirs(output_folder, exist_ok=True)
    shutil.copy(original_program_path, output_folder)
    shutil.copy(original_script_path, output_folder)

    iteration = 0

    last_program_size = sys.maxsize
    current_program_size = countToken(output_program_path)

    while current_program_size < last_program_size:
        last_program_size = current_program_size

        # call renamer
        call_renamer(iteration, output_program_path, output_script_path)

        # call gpt
        call_gpt(iteration, "typedef")

        # call perses
        call_perses(iteration)

        current_program_size = program_size
        # Increase the iteration count
        iteration += 1

    print("Final program size: ", current_program_size)
    


if __name__ == "__main__":
    main()
