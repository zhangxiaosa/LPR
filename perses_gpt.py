import os
import sys
import openai
import subprocess
import shutil

# you need to add OPENAI_API_KEY to the environment variable
openai.api_key = os.getenv("OPENAI_API_KEY")


program_name = "small.c"
script_name = "r.sh"
root_dir = os.getcwd()

original_folder = './benchmark/clang-23309'
original_program_path = os.path.join(original_folder, program_name)
original_script_path = os.path.join(original_folder, script_name)

output_folder = './benchmark_result/clang-23309'
output_program_path = os.path.join(output_folder, program_name)
output_script_path = os.path.join(output_folder, script_name)

#cmd = "inline the functions as much as possible"
#cmd = "inline the function at the end of call chain"
cmd = "inline the typedef"


def call_perses(iteration: int):
    tmp_dir = os.path.join(output_folder, f'iteration_{iteration}_perses')
    os.makedirs(tmp_dir, exist_ok=True)
    tmp_program_path = os.path.join(tmp_dir, program_name)
    tmp_script_path = os.path.join(tmp_dir, script_name)
    shutil.copy(output_program_path, tmp_program_path)
    shutil.copy(output_script_path, tmp_script_path)
    
    subprocess.run(['java', '-jar', 'perses_deploy.jar', \
     '--input', tmp_program_path, '--test', tmp_script_path, '--output-dir', tmp_dir], check=True)

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

    completion = openai.ChatCompletion.create(
        model="gpt-3.5-turbo-0301",
        messages=[
            {"role": "system", "content": "You are an assistant for program transformation and generation. You only need to give the final program."},
            {"role": "user", "content": f"Given the following program, please {cmd}. {program}"}
        ]
    )

    response = completion.choices[0].message

    # write back the inlined program
    with open(tmp_program_path, 'w') as f:
        f.write(response.content)

    # property test
    os.chdir(tmp_dir)
    process = subprocess.run(['./r.sh'], shell=True)
    
    os.chdir(root_dir)
    if process.returncode == 0:
        print("property test passed")
        shutil.copy(tmp_program_path, output_program_path)
    else:
        print("property test failed")

    os.chdir(root_dir)


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

        # Increase the iteration count
        iteration += 1

    print("Final program size: ", current_program_size)
    


if __name__ == "__main__":
    main()
