import os
import sys
import shutil
import time
import datetime
import openai
import utils

def call_perses(output_folder, level):
    print_and_log(f"start perses", level=level)
    output_program_path = os.path.join(output_folder, utils.PROGRAM_NAME)
    output_script_path = os.path.join(output_folder, utils.SCRIPT_NAME)
    working_folder = os.path.join(output_folder, "perses")
    tmp_program_path = os.path.join(working_folder, utils.PROGRAM_NAME)
    tmp_script_path = os.path.join(working_folder, utils.SCRIPT_NAME)
    os.makedirs(working_folder, exist_ok=True)

    if not check_finish(working_folder):
        start_time = time.time()
        shutil.copy(output_program_path, tmp_program_path)
        shutil.copy(output_script_path, tmp_script_path)

        utils.execute_cmd(
            f"java -jar {utils.PERSES_PATH} --input {tmp_program_path} --test {tmp_script_path} --output-dir {working_folder}")

        call_formatter(working_folder)
        end_time = time.time()
        utils.save_file(working_folder, "finish", f"{end_time-start_time}")
    shutil.copy(tmp_program_path, output_program_path)

    program_size = utils.count_token(output_program_path)
    print_and_log(f"Finish perses: {program_size} tokens", level=level)


def call_gpt_with_multi_level_prompt(prompts, operation, output_folder, gpt_version, trail_number, level):

    tmp_folder = os.path.join(output_folder, f"{operation}")
    os.makedirs(tmp_folder, exist_ok=True)

    tmp_program_path = os.path.join(tmp_folder, utils.PROGRAM_NAME)
    tmp_script_path = os.path.join(tmp_folder, utils.SCRIPT_NAME)

    prompt_from_system = prompts["prompt_from_system"]
    operations = prompts["operations"]
    questions = operations[operation]["multi_level_question"]
    primary_question = questions["primary_question"]
    followup_question = questions["followup_question"]
    # ask the primary question
    start_time = time.time()

    # load the program
    program = utils.load_file(tmp_program_path)

    # call gpt
    prompt_from_user = f"{primary_question}. The program is {program}."
    messages = [
        {"role": "system", "content": f"{prompt_from_system}"},
        {"role": "user", "content": f"{prompt_from_user}. The program is {program}."}
    ]
    completion = call_gpt(messages, gpt_version=gpt_version, trail_number=trail_number)
    end_time = time.time()

    # save prompt
    utils.save_json_file(tmp_folder, "primary_question_prompt.json", messages)
    # save response
    utils.save_json_file(tmp_folder, "primary_question_response.json", completion)

    # try multiple times to ensure the quality of target_list
    target_list = []
    for trail in range(trail_number):
        response_text = completion.choices[trail].message.content
        response_json = utils.extract_json(response_text)
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
        program = utils.load_file(tmp_program_path)

        start_time = time.time()

        # call gpt
        messages = [
            {"role": "system", "content": f"{prompt_from_system}"},
            {"role": "user", "content": f"{followup_question}. The program is {program}. \
             The target to be optimized is {target}."}
        ]
        completion = call_gpt(messages, gpt_version=gpt_version, trail_number=trail_number)
        end_time = time.time()
        print_and_log(f"Followup question for target ({target}) \
                      finished in {end_time-start_time:.2f} seconds", level=level+1)
        # save prompt
        utils.save_json_file(target_path, "followup_question_prompt.json", messages)
        # save response
        utils.save_json_file(target_path, "followup_question_response.json", completion)

        # save program
        for trail in range(trail_number):
            response_text = completion.choices[trail].message.content
            response_json = utils.extract_json(response_text)
            if "program" in response_json and isinstance(response_json["program"], str):
                program = response_json["program"]
            else:
                program = ""

            trail_path = os.path.join(target_path, f"trail_{trail}")
            utils.save_program_file(trail_path, program)
            shutil.copy(tmp_script_path, trail_path)

        # test all programs and return the smallest one
        smallest_program = ""
        smallest_size = sys.maxsize
        for trail in range(trail_number):
            trail_path = os.path.join(target_path, f"trail_{trail}")
            program_path = os.path.join(trail_path, utils.PROGRAM_NAME)

            size = utils.count_token(program_path)
            program = utils.load_file(program_path)

            os.chdir(trail_path)
            if property_test():
                print_and_log(f"trail {trail}: program size {size}, pass", level=level+2)
                if size < smallest_size:
                    smallest_size = size
                    smallest_program = program
            else:
                print_and_log(f"trail {trail}: program size {size}, fail", level=level+2)

        if smallest_program != "":
            utils.save_program_file(tmp_folder, smallest_program)

        call_formatter(tmp_folder)
        final_program_size = utils.count_token(tmp_program_path)
        print_and_log(f"Finished gpt ({operation}), target ({target}).", level=level+1)
        print_and_log(f"Current size: {final_program_size} tokens", level=level+1)
    os.chdir(utils.ROOT_FOLDER)

def call_gpt_with_single_level_prompt(prompts, operation, output_folder, gpt_version, trail_number, level):

    tmp_folder = os.path.join(output_folder, f"{operation}")
    os.makedirs(tmp_folder, exist_ok=True)

    tmp_program_path = os.path.join(tmp_folder, utils.PROGRAM_NAME)
    tmp_script_path = os.path.join(tmp_folder, utils.SCRIPT_NAME)

    prompt_from_system = prompts["prompt_from_system"]
    operations = prompts["operations"]
    question = operations[operation]["single_level_question"]

    # ask the single level question
    start_time = time.time()

    # load the program
    program = utils.load_file(tmp_program_path)

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
    utils.save_json_file(tmp_folder, "question_prompt.json", messages)
    # save response
    utils.save_json_file(tmp_folder, "question_response.json", completion)

    # save program
    for trail in range(trail_number):
        response_text = completion.choices[trail].message.content
        response_json = utils.extract_json(response_text)
        if "program" in response_json and isinstance(response_json["program"], str):
            program = response_json["program"]
        else:
            print_and_log(f"invalid result for trail {trail}", level=level)
            program = ""

        trail_path = os.path.join(tmp_folder, f"trail_{trail}")
        utils.save_program_file(trail_path, program)
        shutil.copy(tmp_script_path, trail_path)

    # test all programs and return the smallest one
    smallest_program = ""
    smallest_size = sys.maxsize
    for trail in range(trail_number):
        trail_path = os.path.join(tmp_folder, f"trail_{trail}")
        program_path = os.path.join(trail_path, utils.PROGRAM_NAME)

        size = utils.count_token(program_path)
        program = utils.load_file(program_path)

        os.chdir(trail_path)
        if property_test():
            print_and_log(f"trail {trail}: program size {size}, pass", level=level)
            if size < smallest_size:
                smallest_size = size
                smallest_program = program
        else:
            print_and_log(f"trail {trail}: program size {size}, fail", level=level)

    if smallest_program != "":
        utils.save_program_file(tmp_folder, smallest_program)

    call_formatter(tmp_folder)
    final_program_size = utils.count_token(tmp_program_path)
    print_and_log(f"Finished gpt ({operation})).", level=level)
    print_and_log(f"Current size: {final_program_size} tokens", level=level)

def call_gpt_based_reducer(prompts, operation, output_folder, gpt_version, trail_number, multi_level, level):
    print_and_log(f"Start gpt ({operation})", level=level)

    output_program_path = os.path.join(output_folder, utils.PROGRAM_NAME)
    output_script_path = os.path.join(output_folder, utils.SCRIPT_NAME)
    tmp_folder = os.path.join(output_folder, f"{operation}")
    tmp_program_path = os.path.join(tmp_folder, utils.PROGRAM_NAME)
    orig_program_path = os.path.join(tmp_folder, utils.PROGRAM_NAME + ".orig")
    tmp_script_path = os.path.join(tmp_folder, utils.SCRIPT_NAME)
    os.makedirs(tmp_folder, exist_ok=True)

    if not check_finish(tmp_folder):
        start_time = time.time()
        shutil.copy(output_program_path, tmp_program_path)
        shutil.copy(output_program_path, orig_program_path)
        shutil.copy(output_script_path, tmp_script_path)

        if multi_level:
            call_gpt_with_multi_level_prompt(prompts, operation, output_folder, gpt_version, trail_number, level)
        else:
            call_gpt_with_single_level_prompt(prompts, operation, output_folder, gpt_version, trail_number, level)
        end_time = time.time()
        utils.save_file(tmp_folder, "finish", f"{end_time-start_time}")

    tmp_program_path = os.path.join(tmp_folder, utils.PROGRAM_NAME)
    final_program_size = utils.count_token(tmp_program_path)
    shutil.copy(tmp_program_path, output_program_path)
    print_and_log(f"Finished gpt ({operation}): {final_program_size} tokens", level=level)

def property_test():
    for _ in range(5):
        ret = utils.execute_cmd("./r.sh")
        if ret == 1:
            utils.save_file("./", "property_test_result", "fail")
            return False
    utils.save_file("./", "property_test_result", "pass")
    return True

def check_finish(folder):
    status_file = os.path.join(folder, "finish")
    if os.path.exists(status_file):
        return True
    return False


def call_gpt(message, gpt_version, trail_number=1):
    completion = openai.ChatCompletion.create(
        model=gpt_version,
        n=trail_number,
        messages=message
    )
    return completion


def call_formatter(working_folder):
    working_program_path = os.path.join(working_folder, utils.PROGRAM_NAME)
    working_script_path = os.path.join(working_folder, utils.SCRIPT_NAME)

    tmp_folder = os.path.join(working_folder, "format")
    os.makedirs(tmp_folder, exist_ok=True)
    
    shutil.copy(working_program_path, tmp_folder)
    shutil.copy(working_script_path, tmp_folder)

    current_path = os.getcwd()
    os.chdir(tmp_folder)
    if utils.LANGUAGE in ("c", "cpp"):
        tmp_file = "tmp"
        utils.execute_cmd(f"clang-format {utils.PROGRAM_NAME} > {tmp_file}", output=True)
        if property_test():
            shutil.copy(tmp_file, working_folder)
    elif utils.LANGUAGE in ("rs",):
        utils.execute_cmd(f"rustfmt {utils.PROGRAM_NAME}", output=True)
        if property_test():
            shutil.copy(utils.PROGRAM_NAME, working_folder)
    elif utils.LANGUAGE in ("go",):
        tmp_file = "tmp"
        utils.execute_cmd(f"gofmt {utils.PROGRAM_NAME} > {tmp_file}", output=True)
        if property_test():
            shutil.copy(tmp_file, working_folder)
    elif utils.LANGUAGE in ("js",):
        tmp_file = "tmp"
        utils.execute_cmd(f"js-beautify {utils.PROGRAM_NAME} > {tmp_file}", output=True)
        if property_test():
            shutil.copy(tmp_file, working_folder)
    else:
        pass
    os.chdir(current_path)

def print_and_log(message, level):
    # make indentation
    indent = ""
    for _ in range(level):
        indent = indent + "  "

    # make time stamp
    now = datetime.datetime.now()
    time_string = now.strftime("%Y-%m-%d %H:%M:%S")
    message = f"{indent}[{time_string}] {message}"
    print(message)
    with open(utils.LOG_FILE_NAME, 'a') as file:
        file.write(message + '\n')

def main():

    utils.init_openai_api_key()
    utils.init_language()
    args = utils.initialize_args()
    args_string = utils.get_args_string(args)

    prompt_file = args.prompts
    gpt_version = args.version
    case = args.case
    benchmark_suite_folder = args.benchmark_suite
    trail_number = args.trail
    multi_level = args.multi_level

    # get prompts
    prompts = utils.load_json_file(prompt_file)

    # get current code version
    code_version = utils.get_current_version()

    # get case list
    case_list = []
    if (case is None):
        for item in os.listdir(benchmark_suite_folder):
            if os.path.isdir(item):
                case_list.append(item)
    else:
        case_list.append(case)

    for case in case_list:
        # get main folder
        main_folder = os.path.normpath(
            os.path.join("/tmp/gpt_reduction/results/", code_version, args_string, case)
        )
        os.makedirs(main_folder, exist_ok=True)

        utils.LOG_FILE_NAME = os.path.join(main_folder, "log.txt")

        # copy original files to main folder
        original_program_path = os.path.join(benchmark_suite_folder, case, utils.PROGRAM_NAME)
        original_script_path = os.path.join(benchmark_suite_folder, case, utils.SCRIPT_NAME)
        
        main_program_path = os.path.join(main_folder, utils.PROGRAM_NAME)
        main_script_path = os.path.join(main_folder, utils.SCRIPT_NAME)
        
        shutil.copy(original_program_path, main_program_path)
        shutil.copy(original_script_path, main_script_path)

        # start
        original_program_size = utils.count_token(original_program_path)
        print_and_log(f"Start reduction, original program size: {original_program_size} tokens", level=0)
        iteration = 0

        program_size_before_iteration = sys.maxsize

        program_size_after_iteration = utils.count_token(main_program_path)

        while program_size_after_iteration < program_size_before_iteration:
            iteration_folder = os.path.join(main_folder, f"iteration_{iteration}")
            os.makedirs(iteration_folder, exist_ok=True)
            shutil.copy(main_program_path, iteration_folder)
            shutil.copy(main_script_path, iteration_folder)

            iteration_program_path = os.path.join(iteration_folder, utils.PROGRAM_NAME)
            iteration_script_path = os.path.join(iteration_folder, utils.SCRIPT_NAME)

            program_size_before_iteration = program_size_after_iteration
            smallest_program = utils.load_file(main_program_path)

            print_and_log(f"Start iteration {iteration}, current size: {utils.count_token(main_program_path)}", level=1)

            # call gpt reducers
            operations = prompts["operations"]
            for operation in operations.keys():
                operation_folder = os.path.join(iteration_folder, f"operation_{operation}")
                os.makedirs(operation_folder, exist_ok=True)
                shutil.copy(iteration_program_path, operation_folder)
                shutil.copy(iteration_script_path, operation_folder)
                operation_program_path = os.path.join(operation_folder, utils.PROGRAM_NAME)

                print_and_log(f"Start operation {operation}, current size: {utils.count_token(operation_program_path)}", level=2)

                # call renamer
                utils.call_renamer(operation_folder, level=2)

                # call gpt
                program_before_operation = utils.load_file(operation_program_path)
                call_gpt_based_reducer(prompts=prompts, operation=operation,
                                    output_folder=operation_folder, gpt_version=gpt_version,
                                    trail_number=trail_number, multi_level=multi_level, level=2)
                program_after_operation = utils.load_file(operation_program_path)

                # call perses
                if program_before_operation != program_after_operation:
                    print_and_log("GPT made progress", level=2)
                    call_perses(operation_folder, level=2)

                program_size_after_operation = utils.count_token(operation_program_path)
                shutil.copy(operation_program_path, iteration_folder)
                print_and_log(f"Finished iteration {iteration}, operation {operation}, \
                            current size: {program_size_after_operation} tokens", level=2)

            program_size_after_iteration = utils.count_token(iteration_program_path)
            shutil.copy(iteration_program_path, main_folder)
            # Increase the iteration count
            iteration = iteration + 1

        utils.save_program_file(main_folder, smallest_program)
        print_and_log(f"Finished reduction, reduction ratio: \
                    {program_size_before_iteration}/{original_program_size}", level=0)

if __name__ == "__main__":
    main()
