import os
import json
import subprocess
import re
import argparse
import copy
import glob
import openai


SCRIPT_NAME = "r.sh"
TOKEN_COUNTER_PATH = "/tmp/gpt_reduction/tools/token_counter_deploy.jar"
PERSES_PATH = "/tmp/gpt_reduction/tools/perses_deploy.jar"
VULCAN_PATH = "/tmp/gpt_reduction/tools/vulcan_deploy.jar"
LOG_FILE_NAME = None
LANGUAGE = None
PROGRAM_NAME = None

def execute_cmd(cmd, output=False):
    if output:
        process = subprocess.run(f"{cmd}", shell=True, check=False)
    else:
        process = subprocess.run(f"{cmd}", shell=True, stdout=subprocess.DEVNULL,
                                 stderr=subprocess.DEVNULL, check=False)
    return process.returncode

def property_test():
    for _ in range(5):
        ret = execute_cmd("./r.sh")
        if ret == 1:
            save_file("./", "property_test_result", "fail")
            return False
    save_file("./", "property_test_result", "pass")
    return True

def save_file(folder_path, file_name, content):
    os.makedirs(folder_path, exist_ok=True)
    file_path = os.path.join(folder_path, file_name)
    with open(file_path, "w") as file_writer:
        file_writer.write(content)

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


def load_file(path):
    with open(path, "r") as file_reader:
        program = file_reader.read()
    return program


def load_json_file(path):
    with open(path, "r") as file_reader:
        json_object = json.load(file_reader)
    return json_object

def check_finish(folder):
    status_file = os.path.join(folder, "finish")
    if os.path.exists(status_file):
        return True
    return False


def count_token(program_path):
    output = subprocess.check_output(
        f"java -jar {TOKEN_COUNTER_PATH} -- {program_path}", shell=True)
    size_str = output.decode().splitlines()[-1]
    return int(size_str)


def extract_code(text):
    pattern = r"```[\S]*(.*?)```"
    result = re.findall(pattern, text, re.DOTALL)
    if result:
        return result[-1]
    return text


def extract_json(text):
    pattern = r"```(?i)json(.*?)```"
    result = re.findall(pattern, text, re.DOTALL)
    if len(result) != 0:
        json_string = result[-1]
        try:
            return json.loads(json_string)
        except json.JSONDecodeError:
            return {}
    else:
        return {}

def get_current_version():
    result = subprocess.run("git rev-parse --short HEAD", stdout=subprocess.PIPE, shell=True, text=True, check=False)
    version = result.stdout.strip()
    return version

def get_args_string(args):
    """Generate a string representation of the arguments."""
    args_dict = copy.deepcopy(vars(args))
    args_dict.pop("case")
    args_string = '_'.join(f'{key}_{value}' for key, value in args_dict.items())
    pattern = re.compile(r'[^a-zA-Z0-9]+')
    return pattern.sub('_', args_string)

def initialize_args():
    parser = argparse.ArgumentParser(description="Process some inputs.")
    parser.add_argument("--prompts", type=str, required=False, default="/tmp/gpt_reduction/prompts/prompts.json", help="Configuration file about prompts")
    parser.add_argument("--benchmark-suite", type=str, required=True, help="Folder of benchmark suite")
    parser.add_argument("--case", type=str, required=False, default=None, help="Benchmark ID")
    parser.add_argument("--trail", type=int, required=False, default=5, help="Number of trials in GPT")
    parser.add_argument("--llm-version", type=str, required=False, default="gpt-3.5-turbo-0613", help="LLM version")
    parser.add_argument("--multi-level", action="store_false", required=False, default=True, help="Enable multi-level prompt")
    parser.add_argument("--id", type=str, required=False, help="A unique identifier used to differentiate each rerun")
    args = parser.parse_args()
    return args

def init_openai_api_key():
    """Initialize OpenAI API key or raise an error if it is not set."""
    openai_api_key = os.getenv("OPENAI_API_KEY")
    if not openai_api_key:
        raise EnvironmentError("OPENAI_API_KEY is not set in the environment variables.")
    openai.api_key = openai_api_key

def init_language(folder):
    """Determine the programming language and initialize LANGUAGE and PROGRAM_NAME."""
    global LANGUAGE, PROGRAM_NAME
    program_name_dict = {
        "c": "small.c",
        "cpp": "small.cpp",
        "rs": "small.rs",
        "go": "small.go",
        "js": "small.js"
    }
    for ext, file_name in program_name_dict.items():
        if glob.glob(os.path.join(folder, file_name)):
            LANGUAGE = ext
            PROGRAM_NAME = file_name
            return
    raise ValueError("Could not determine the programming language.")
