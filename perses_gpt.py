import os
import sys
import openai
import subprocess
import shutil
import time

# you need to add OPENAI_API_KEY to the environment variable
openai.api_key = os.getenv("OPENAI_API_KEY")


program_name = "small.c"
script_name = "r.sh"
root_dir = os.getcwd()
case = "clang-27137"
skip_gpt = False
#skip_gpt = True

original_folder = os.path.join('./benchmark/', case)
original_program_path = os.path.join(original_folder, program_name)
original_script_path = os.path.join(original_folder, script_name)

output_folder = os.path.join('./benchmark_result/', case)
output_program_path = os.path.join(output_folder, program_name)
output_script_path = os.path.join(output_folder, script_name)

#cmd = "inline the functions as much as possible"
#cmd = "inline the function at the end of call chain"
#cmd = "select what you think is the simplest function, inline it, and completely eliminate this function."
#cmd = "apply function inlining to fn1, and do not change anything else"
#cmd = "remove fn1"
#cmd = "select what you think is the simplest function, inline it, and completely eliminate this function. Note that the transformed program must be semantically equivalent to the original one"
#cmd = "inline fn5 to simplify the program and do not change anything else. Note that the transformed program must be semantically equivalent to the original one"
#cmd = "inline one function. Note that the transformed program must be semantically equivalent to the original one"
#cmd = "replace int8_t with char to remove that typedef. Note that the transformed program must be semantically equivalent to the original one"
#cmd = "inline the function at the end of the call chain. Note that the transformed program must be semantically equivalent to the original one"
cmd = "find out the first typedef, remove it and replace it with the original data type"
cmd = "use constant propagation to remove it. only optimize out one variable and do not touch the others"

def call_perses(iteration: int):
    tmp_dir = os.path.join(output_folder, f'iteration_{iteration}_perses')
    os.makedirs(tmp_dir, exist_ok=True)
    tmp_program_path = os.path.join(tmp_dir, program_name)
    tmp_script_path = os.path.join(tmp_dir, script_name)
    shutil.copy(output_program_path, tmp_program_path)
    shutil.copy(output_script_path, tmp_script_path)
    
    subprocess.run(['java', '-jar', 'perses_deploy.jar', \
     '--input', tmp_program_path, '--test', tmp_script_path, '--output-dir', tmp_dir], check=True)

    format_program(tmp_program_path)
    shutil.copy(tmp_program_path, output_folder)

def call_gpt(iteration: int):
    tmp_dir = os.path.join(output_folder, f'iteration_{iteration}_gpt')
    os.makedirs(tmp_dir, exist_ok=True)
    tmp_program_path = os.path.join(tmp_dir, program_name)
    tmp_script_path = os.path.join(tmp_dir, script_name)
    shutil.copy(output_program_path, tmp_program_path)
    shutil.copy(output_script_path, tmp_script_path)

    # load the program
    with open(tmp_program_path, 'r') as f:
        program = f.read()

    start_time = time.time()
    completion = openai.ChatCompletion.create(
        model="gpt-3.5-turbo-0301",
        temperature=0.7,
        messages=[
            #{"role": "system", "content": "You are an assistant for program transformation and generation. Please make the specific modifications as instructed, without altering anything else. Just give the final program, do not give any other textual description and explanation."},
            {"role": "system", "content": "You are an assistant for program transformation and generation. Please make the specific modifications as instructed, without altering anything else. Please firstly give your step by step analysis and explanation, and finally give the program."},
            {"role": "user", "content": f"Given the following program, {cmd}. {program}"}
        ]
    )

    response = completion.choices[0].message
    end_time = time.time()
    print(f"gpt returned in {end_time-start_time} seconds")

    # write back the inlined program
    with open(tmp_program_path, 'w') as f:
        f.write(response.content)
    format_program(tmp_program_path)

    # property test
    os.chdir(tmp_dir)
    process = subprocess.run(['./r.sh'], shell=True)
    
    os.chdir(root_dir)
    if process.returncode == 0:
        print("property test passed")
        shutil.copy(tmp_program_path, output_program_path)
    else:
        print("property test failed")
        exit(1)

    os.chdir(root_dir)

def format_program(path):
    subprocess.run(f'clang-format {path} > tmp.c', shell=True)
    shutil.copy(path, 'tmp.c')

def countToken(program_path):
    output = subprocess.check_output(['java', '-jar', 'token_counter_deploy.jar', '--', program_path])
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
        if (not skip_gpt):
            # call gpt
            print(f"Iteration {iteration}, starting gpt")
            call_gpt(iteration)
            program_size = countToken(output_program_path)
            print(f"Iteration {iteration}, after gpt: {program_size} tokens")

        # call perses
        print(f"Iteration {iteration}, starting perses")
        call_perses(iteration)
        program_size = countToken(output_program_path)
        print(f"Iteration {iteration}, after perses: {program_size} tokens")

        current_program_size = program_size
        # Increase the iteration count
        iteration += 1

    print("Final program size: ", current_program_size)
    


if __name__ == "__main__":
    main()
