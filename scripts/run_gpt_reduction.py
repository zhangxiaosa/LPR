import os
import sys
import shutil
import time
import datetime
import openai
import utils

def call_gpt_with_multi_level_prompt(prompts, operation, output_folder, llm_version, trial_number, level):

    operation_folder = os.path.join(output_folder, f"{operation}")
    os.makedirs(operation_folder, exist_ok=True)

    operation_program_path = os.path.join(operation_folder, utils.PROGRAM_NAME)
    operation_script_path = os.path.join(operation_folder, utils.SCRIPT_NAME)

    prompt_from_system = prompts["prompt_from_system"]
    operations = prompts["operations"]
    questions = operations[operation]["multi_level_question"]
    primary_question = questions["primary_question"]
    followup_question = questions["followup_question"]

    if not utils.check_finish(operation_folder):
        
        # ask the primary question
        start_time = time.time()

        # load the program
        program = utils.load_file(operation_program_path)

        # call gpt
        prompt_from_user = f"{primary_question}. The program is {program}."
        messages = [
            {"role": "system", "content": f"{prompt_from_system}"},
            {"role": "user", "content": f"{prompt_from_user}. The program is {program}."}
        ]
        completion = call_gpt(messages, llm_version=llm_version, trial_number=trial_number)
        end_time = time.time()

        # save prompt
        utils.save_json_file(operation_folder, "primary_question_prompt.json", messages)
        # save response
        utils.save_json_file(operation_folder, "primary_question_response.json", completion)
        # save response time
        utils.save_file(operation_folder, "primary_question_response_time.txt", f"{end_time-start_time:.2f}")

        # try multiple times to ensure the quality of target_list
        longest_current_list = []

        for trial in range(trial_number):
            response_text = completion.choices[trial].message.content
            response_json = utils.extract_json(response_text)
            
            if "target_list" in response_json:
                current_list = response_json["target_list"]
                
                # Deduplicate and filter out non-string elements
                if isinstance(current_list, list):
                    deduplicated_and_filtered_list = [item for item in set(current_list) if isinstance(item, str)]
                    
                    # Update the longest list if current one is longer
                    if len(deduplicated_and_filtered_list) > len(longest_current_list):
                        longest_current_list = deduplicated_and_filtered_list

        # Sort the longest deduplicated and filtered list
        target_list = sorted(longest_current_list)

        print_and_log(f"Primary question finished in {end_time-start_time:.2f} seconds", level=level)
        utils.save_file(operation_folder, "finish", f"{end_time-start_time:.2f}")
        utils.save_json_file(operation_folder, "target_list.json", target_list)

    target_list = utils.load_json_file(os.path.join(operation_folder, "target_list.json"))
    print_and_log(f"Identified target list: {target_list}", level=level)

    # if no target identified, return
    if len(target_list) == 0:
        return

    # ask the followup question
    for target_id, target in enumerate(target_list):
        target_folder = os.path.join(operation_folder, f"target_{target_id}")
        os.makedirs(target_folder, exist_ok=True)
        target_program_path = os.path.join(target_folder, utils.PROGRAM_NAME)
        target_script_path = os.path.join(target_folder, utils.SCRIPT_NAME)
        
        shutil.copy(operation_program_path, target_program_path)
        shutil.copy(operation_script_path, target_script_path)

        if not utils.check_finish(target_folder):
            # call gpt
            start_time = time.time()

            # load the program
            program = utils.load_file(operation_program_path)
            messages = [
                {"role": "system", "content": f"{prompt_from_system}"},
                {"role": "user", "content": f"{followup_question}. The program is {program}. \
                The target to be optimized is {target}."}
            ]
            completion = call_gpt(messages, llm_version=llm_version, trial_number=trial_number)
            end_time = time.time()
    
            # save prompt
            utils.save_json_file(target_folder, "followup_question_prompt.json", messages)
            # save response content
            utils.save_json_file(target_folder, "followup_question_response.json", completion)
            # save response time
            utils.save_file(target_folder, "followup_question_response_time.txt", f"{end_time-start_time:.2f}")
            
            # save programs from followup_question_response.json
            for trial in range(trial_number):
                response_text = completion.choices[trial].message.content
                response_json = utils.extract_json(response_text)
                if "program" in response_json and isinstance(response_json["program"], str):
                    program = response_json["program"]
                else:
                    program = ""

                trial_path = os.path.join(target_folder, f"trial_{trial}")
                utils.save_program_file(trial_path, program)
                shutil.copy(operation_script_path, trial_path)

            end_time = time.time()
            utils.save_file(target_folder, "finish", f"{end_time-start_time:.2f}")

        elasped_time = utils.load_file(os.path.join(target_folder, "followup_question_response_time.txt"))
        print_and_log(f"Followup question for target ({target}) \
            finished in {elasped_time} seconds", level=level+1)

        # test all programs and return the smallest one
        smallest_program = ""
        smallest_size = sys.maxsize
        for trial in range(trial_number):
            trial_path = os.path.join(target_folder, f"trial_{trial}")
            trial_program_path = os.path.join(trial_path, utils.PROGRAM_NAME)

            size = utils.count_token(trial_program_path)
            program = utils.load_file(trial_program_path)

            os.chdir(trial_path)
            if property_test():
                print_and_log(f"trial {trial}: program size {size}, pass", level=level+2)
                if size < smallest_size:
                    smallest_size = size
                    smallest_program = program
            else:
                print_and_log(f"trial {trial}: program size {size}, fail", level=level+2)

        if smallest_program != "":
            utils.save_program_file(target_folder, smallest_program)

        utils.call_formatter(target_folder)

        final_program_size = utils.count_token(target_program_path)
        print_and_log(f"Finished gpt ({operation}), target ({target}).", level=level+1)
        print_and_log(f"Current size: {final_program_size} tokens", level=level+1)
        shutil.copy(target_program_path, operation_program_path)

    os.chdir(utils.ROOT_FOLDER)

def call_gpt_with_single_level_prompt(prompts, operation, output_folder, llm_version, trial_number, level):

    operation_folder = os.path.join(output_folder, f"{operation}")
    os.makedirs(operation_folder, exist_ok=True)

    operation_program_path = os.path.join(operation_folder, utils.PROGRAM_NAME)
    operation_script_path = os.path.join(operation_folder, utils.SCRIPT_NAME)

    output_program_path = os.path.join(output_folder, utils.PROGRAM_NAME)
    output_script_path = os.path.join(output_folder, utils.SCRIPT_NAME)

    shutil.copy(output_program_path, operation_program_path)
    shutil.copy(output_script_path, operation_script_path)

    prompt_from_system = prompts["prompt_from_system"]
    operations = prompts["operations"]
    question = operations[operation]["single_level_question"]

    if not utils.check_finish(operation_folder):

        # ask the single level question
        start_time = time.time()

        # load the program
        program = utils.load_file(operation_program_path)

        # call gpt
        prompt_from_user = f"{question}. The program is {program}."
        messages = [
            {"role": "system", "content": f"{prompt_from_system}"},
            {"role": "user", "content": f"{prompt_from_user}. The program is {program}."}
        ]
        completion = call_gpt(messages, llm_version=llm_version, trial_number=trial_number)
        end_time = time.time()
        print_and_log(f"Question finished in {end_time-start_time:.2f} seconds", level=level)

        # save prompt
        utils.save_json_file(operation_folder, "question_prompt.json", messages)
        # save response
        utils.save_json_file(operation_folder, "question_response.json", completion)

        # save program
        for trial in range(trial_number):
            response_text = completion.choices[trial].message.content
            response_json = utils.extract_json(response_text)
            if "program" in response_json and isinstance(response_json["program"], str):
                program = response_json["program"]
            else:
                print_and_log(f"invalid result for trial {trial}", level=level)
                program = ""

            trial_path = os.path.join(operation_folder, f"trial_{trial}")
            utils.save_program_file(trial_path, program)
            shutil.copy(operation_script_path, trial_path)

        # test all programs and return the smallest one
        smallest_program = ""
        smallest_size = sys.maxsize
        for trial in range(trial_number):
            trial_path = os.path.join(operation_folder, f"trial_{trial}")
            trial_program_path = os.path.join(trial_path, utils.PROGRAM_NAME)

            size = utils.count_token(trial_program_path)
            program = utils.load_file(trial_program_path)

            os.chdir(trial_path)
            if property_test():
                print_and_log(f"trial {trial}: program size {size}, pass", level=level)
                if size < smallest_size:
                    smallest_size = size
                    smallest_program = program
            else:
                print_and_log(f"trial {trial}: program size {size}, fail", level=level)

        if smallest_program != "":
            utils.save_program_file(operation_folder, smallest_program)

        utils.call_formatter(operation_folder)
        end_time = time.time()

        final_program_size = utils.count_token(operation_program_path)
        print_and_log(f"Finished gpt ({operation})).", level=level)
        print_and_log(f"Current size: {final_program_size} tokens", level=level)
        utils.save_file(operation_folder, "finish", f"{end_time-start_time:.2f}")

    shutil.copy(operation_program_path, output_program_path)

def call_gpt_based_reducer(prompts, operation, output_folder, llm_version, trial_number, multi_level, level):
    print_and_log(f"Start gpt ({operation})", level=level)

    output_program_path = os.path.join(output_folder, utils.PROGRAM_NAME)
    output_script_path = os.path.join(output_folder, utils.SCRIPT_NAME)
    operation_folder = os.path.join(output_folder, f"{operation}")
    operation_program_path = os.path.join(operation_folder, utils.PROGRAM_NAME)
    orig_program_path = os.path.join(operation_folder, utils.PROGRAM_NAME + ".orig")
    operation_script_path = os.path.join(operation_folder, utils.SCRIPT_NAME)
    os.makedirs(operation_folder, exist_ok=True)

    start_time = time.time()
    shutil.copy(output_program_path, operation_program_path)
    shutil.copy(output_program_path, orig_program_path)
    shutil.copy(output_script_path, operation_script_path)

    if multi_level:
        call_gpt_with_multi_level_prompt(prompts, operation, output_folder, llm_version, trial_number, level)
    else:
        call_gpt_with_single_level_prompt(prompts, operation, output_folder, llm_version, trial_number, level)
    end_time = time.time()
    utils.save_file(operation_folder, "finish", f"{end_time-start_time:.2f}")

    operation_program_path = os.path.join(operation_folder, utils.PROGRAM_NAME)
    final_program_size = utils.count_token(operation_program_path)
    shutil.copy(operation_program_path, output_program_path)
    print_and_log(f"Finished gpt ({operation}): {final_program_size} tokens", level=level)

def property_test():
    for _ in range(5):
        ret = utils.execute_cmd("./r.sh")
        if ret == 1:
            utils.save_file("./", "property_test_result", "fail")
            return False
    utils.save_file("./", "property_test_result", "pass")
    return True

def call_gpt(message, llm_version, trial_number=1):
    completion = openai.ChatCompletion.create(
        model=llm_version,
        n=trial_number,
        messages=message
    )
    return completion

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
    parser = utils.initialize_parser()
    args = parser.parse_args()
    args_string = utils.get_args_string(parser)

    prompt_file = args.prompts
    llm_version = args.llm_version
    case = args.case
    benchmark_suite_folder = args.benchmark_suite
    trial_number = args.trial
    multi_level = args.multi_level

    utils.init_language(benchmark_suite_folder)
    utils.init_root_folder(os.getcwd())

    # get prompts
    prompts = utils.load_json_file(prompt_file)

    # get current code version
    code_version = utils.get_current_version()

    # get case list
    case_list = utils.get_benchmarks(benchmark_suite_folder, case)

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
        print_and_log(f"Start reduction on {case}, original program size: {original_program_size} tokens", level=0)
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

                # call gpt
                program_before_operation = utils.load_file(operation_program_path)
                call_gpt_based_reducer(prompts=prompts, operation=operation,
                                    output_folder=operation_folder, llm_version=llm_version,
                                    trial_number=trial_number, multi_level=multi_level, level=2)
                program_after_operation = utils.load_file(operation_program_path)

                # call perses
                if program_before_operation != program_after_operation:
                    print_and_log("GPT made progress", level=2)
                    utils.call_perses(operation_folder, level=2)

                program_size_after_operation = utils.count_token(operation_program_path)
                shutil.copy(operation_program_path, iteration_folder)
                print_and_log(f"Finished iteration {iteration}, operation {operation}, \
                            current size: {program_size_after_operation} tokens", level=2)

            program_size_after_iteration = utils.count_token(iteration_program_path)
            shutil.copy(iteration_program_path, main_folder)
            # Increase the iteration count
            iteration = iteration + 1

        utils.save_program_file(main_folder, smallest_program)
        print_and_log(f"Finished reduction on {case}, reduction ratio: \
                    {program_size_before_iteration}/{original_program_size}", level=0)

if __name__ == "__main__":
    main()