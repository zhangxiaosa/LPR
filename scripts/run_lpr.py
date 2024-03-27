import os
import sys
import time
import utils


def call_llm_with_multi_level_prompt(client, prompts, transformation, output_folder, llm_version, trial_number, temperature, level):
    """
    call LLM with the multi-level prompt
    """
    transformation_folder = os.path.join(output_folder, f"{transformation}")
    os.makedirs(transformation_folder, exist_ok=True)

    transformation_program_path = os.path.join(transformation_folder, utils.PROGRAM_NAME)
    transformation_script_path = os.path.join(transformation_folder, utils.SCRIPT_NAME)

    prompt_system = prompts["prompt_system"]
    prompt_to_generate_program = prompts["prompt_to_generate_program"]
    transformations = prompts["transformations"]
    questions = transformations[transformation]["multi_level_question"]
    primary_question = questions["primary_question"]
    followup_question = questions["followup_question"]

    if not utils.check_finish(transformation_folder):

        # ask the primary question
        start_time = time.time()

        # load the program
        program = utils.load_file(transformation_program_path)

        # call llm
        prompt_from_user = f"{primary_question}. The program is {program}."
        messages = [
            {"role": "system", "content": f"{prompt_system}"},
            {"role": "user", "content": f"{prompt_from_user}"}
        ]
        completion = call_llm(client, messages, llm_version=llm_version,
                              trial_number=trial_number, temperature=temperature)
        end_time = time.time()

        # save prompt
        utils.save_json_file(transformation_folder, "primary_question_prompt.json", messages)
        # save response
        utils.save_file(transformation_folder, "primary_question_response.json", completion.model_dump_json(indent=2))
        # save response time
        utils.save_file(transformation_folder, "primary_question_response_time.txt", f"{end_time - start_time:.2f}")

        # Iterating through the trials
        target_list = []
        for trial in range(trial_number):
            response_text = completion.choices[trial].message.content
            response_list = utils.extract_list_between_star_and_newline(response_text)

            if len(response_list) != 0:
                deduplicated_and_filtered_list = [item for item in set(response_list) if isinstance(item, str)]

                # Use the deduplicated and filtered list from the current trial
                target_list = sorted(deduplicated_and_filtered_list)
                break

        utils.print_and_log(f"Primary question finished in {end_time - start_time:.2f} seconds", level=level)
        utils.save_file(transformation_folder, "finish", f"{end_time - start_time:.2f}")
        utils.save_json_file(transformation_folder, "target_list.json", target_list)

    target_list = utils.load_json_file(os.path.join(transformation_folder, "target_list.json"))
    utils.print_and_log(f"Identified target list: {target_list}", level=level)

    # if no target identified, return
    if len(target_list) == 0:
        return

    # ask the followup question
    for target_id, target in enumerate(target_list):
        target_folder = os.path.join(transformation_folder, f"target_{target_id}")
        os.makedirs(target_folder, exist_ok=True)
        target_program_path = os.path.join(target_folder, utils.PROGRAM_NAME)
        target_script_path = os.path.join(target_folder, utils.SCRIPT_NAME)

        utils.copy_file(transformation_program_path, target_program_path)
        utils.copy_file(transformation_script_path, target_script_path)

        if not utils.check_finish(target_folder):
            # call llm
            start_time = time.time()

            # load the program
            program = utils.load_file(transformation_program_path)
            messages = [
                {"role": "system", "content": f"{prompt_system} {prompt_to_generate_program}"},
                {"role": "user", "content": f"{followup_question}. The program is {program}. \
                The target to be optimized is {target}."}
            ]
            completion = call_llm(client, messages, llm_version=llm_version,
                                  trial_number=trial_number, temperature=temperature)
            end_time = time.time()

            # save prompt
            utils.save_json_file(target_folder, "followup_question_prompt.json", messages)
            # save response content
            utils.save_file(target_folder, "followup_question_response.json", completion.model_dump_json(indent=2))
            # save response time
            utils.save_file(target_folder, "followup_question_response_time.txt", f"{end_time - start_time:.2f}")

            # save programs from followup_question_response.json
            for trial in range(trial_number):
                response_text = completion.choices[trial].message.content
                program = utils.extract_string_from_docstring(response_text)

                trial_path = os.path.join(target_folder, f"trial_{trial}")
                utils.save_program_file(trial_path, program)
                utils.copy_file(transformation_script_path, trial_path)

            end_time = time.time()
            utils.save_file(target_folder, "finish", f"{end_time - start_time:.2f}")

        elapsed_time = utils.load_file(os.path.join(target_folder, "followup_question_response_time.txt"))
        utils.print_and_log(f"Followup question for target ({target}) \
            finished in {elapsed_time} seconds", level=level + 1)

        # test all programs and return the smallest one
        smallest_program = ""
        smallest_size = sys.maxsize
        for trial in range(trial_number):
            trial_path = os.path.join(target_folder, f"trial_{trial}")
            trial_program_path = os.path.join(trial_path, utils.PROGRAM_NAME)

            size = utils.count_token(trial_program_path)
            program = utils.load_file(trial_program_path)

            os.chdir(trial_path)
            if utils.property_test():
                utils.print_and_log(f"trial {trial}: program size {size}, pass", level=level + 2)
                if size < smallest_size:
                    smallest_size = size
                    smallest_program = program
            else:
                utils.print_and_log(f"trial {trial}: program size {size}, fail", level=level + 2)

        if smallest_program != "":
            utils.save_program_file(target_folder, smallest_program)
            utils.call_formatter(target_folder)

        final_program_size = utils.count_token(target_program_path)
        utils.print_and_log(f"Finished llm ({transformation}), target ({target}).", level=level + 1)
        utils.print_and_log(f"Current size: {final_program_size} tokens", level=level + 1)
        utils.copy_file(target_program_path, transformation_program_path)

    os.chdir(utils.ROOT_FOLDER)


def call_llm_with_single_level_prompt(client, prompts, transformation, output_folder, llm_version, trial_number,
                                      temperature, level):
    """
    call LLM with the single-level prompt
    """
    transformation_folder = os.path.join(output_folder, f"{transformation}")
    os.makedirs(transformation_folder, exist_ok=True)

    transformation_program_path = os.path.join(transformation_folder, utils.PROGRAM_NAME)
    transformation_script_path = os.path.join(transformation_folder, utils.SCRIPT_NAME)

    output_program_path = os.path.join(output_folder, utils.PROGRAM_NAME)
    output_script_path = os.path.join(output_folder, utils.SCRIPT_NAME)

    utils.copy_file(output_program_path, transformation_program_path)
    utils.copy_file(output_script_path, transformation_script_path)

    prompt_system = prompts["prompt_system"]
    prompt_to_generate_program = prompts["prompt_to_generate_program"]
    transformations = prompts["transformations"]
    question = transformations[transformation]["single_level_question"]

    if not utils.check_finish(transformation_folder):

        # ask the single level question
        start_time = time.time()

        # load the program
        program = utils.load_file(transformation_program_path)

        # call llm
        prompt_from_user = f"{question}. The program is {program}."
        messages = [
            {"role": "system", "content": f"{prompt_system} {prompt_to_generate_program}"},
            {"role": "user", "content": f"{prompt_from_user}"}
        ]
        completion = call_llm(client, messages, llm_version=llm_version, trial_number=trial_number,
                              temperature=temperature)
        end_time = time.time()
        utils.print_and_log(f"Question finished in {end_time - start_time:.2f} seconds", level=level)

        # save prompt
        utils.save_json_file(transformation_folder, "question_prompt.json", messages)
        # save response
        utils.save_file(transformation_folder, "question_response.json", completion.model_dump_json(indent=2))

        # save program
        for trial in range(trial_number):
            response_text = completion.choices[trial].message.content
            response_json = utils.extract_json(response_text)
            if "program" in response_json and isinstance(response_json["program"], str):
                program = response_json["program"]
            else:
                utils.print_and_log(f"invalid result for trial {trial}", level=level)
                program = ""

            trial_path = os.path.join(transformation_folder, f"trial_{trial}")
            utils.save_program_file(trial_path, program)
            utils.copy_file(transformation_script_path, trial_path)

        # test all programs and return the smallest one
        smallest_program = ""
        smallest_size = sys.maxsize
        for trial in range(trial_number):
            trial_path = os.path.join(transformation_folder, f"trial_{trial}")
            trial_program_path = os.path.join(trial_path, utils.PROGRAM_NAME)

            size = utils.count_token(trial_program_path)
            program = utils.load_file(trial_program_path)

            os.chdir(trial_path)
            if utils.property_test():
                utils.print_and_log(f"trial {trial}: program size {size}, pass", level=level)
                if size < smallest_size:
                    smallest_size = size
                    smallest_program = program
            else:
                utils.print_and_log(f"trial {trial}: program size {size}, fail", level=level)

        if smallest_program != "":
            utils.save_program_file(transformation_folder, smallest_program)
            utils.call_formatter(transformation_folder)

        end_time = time.time()

        final_program_size = utils.count_token(transformation_program_path)
        utils.print_and_log(f"Finished llm ({transformation})).", level=level)
        utils.print_and_log(f"Current size: {final_program_size} tokens", level=level)
        utils.save_file(transformation_folder, "finish", f"{end_time - start_time:.2f}")

    utils.copy_file(transformation_program_path, output_program_path)


def call_llm_based_reducer(client, prompts, transformation, output_folder, llm_version, trial_number, temperature,
                           multi_level, level):
    """
    call LLM based reducer, with multi-level or single-level prompt.
    """
    utils.print_and_log(f"Start llm ({transformation})", level=level)

    output_program_path = os.path.join(output_folder, utils.PROGRAM_NAME)
    output_script_path = os.path.join(output_folder, utils.SCRIPT_NAME)
    transformation_folder = os.path.join(output_folder, f"{transformation}")
    transformation_program_path = os.path.join(transformation_folder, utils.PROGRAM_NAME)
    orig_program_path = os.path.join(transformation_folder, utils.PROGRAM_NAME + ".orig")
    transformation_script_path = os.path.join(transformation_folder, utils.SCRIPT_NAME)
    os.makedirs(transformation_folder, exist_ok=True)

    start_time = time.time()
    utils.copy_file(output_program_path, transformation_program_path)
    utils.copy_file(output_program_path, orig_program_path)
    utils.copy_file(output_script_path, transformation_script_path)

    if multi_level:
        call_llm_with_multi_level_prompt(client, prompts, transformation, output_folder, llm_version, trial_number,
                                         temperature, level)
    else:
        call_llm_with_single_level_prompt(client, prompts, transformation, output_folder, llm_version, trial_number,
                                          temperature, level)
    end_time = time.time()
    utils.save_file(transformation_folder, "finish", f"{end_time - start_time:.2f}")

    transformation_program_path = os.path.join(transformation_folder, utils.PROGRAM_NAME)
    final_program_size = utils.count_token(transformation_program_path)
    utils.copy_file(transformation_program_path, output_program_path)
    utils.print_and_log(f"Finished llm ({transformation}): {final_program_size} tokens", level=level)


def call_llm(client, message, llm_version, trial_number=1, temperature=1.0):
    """
    call LLM
    """
    completion = client.chat.completions.create(
        model=llm_version,
        n=trial_number,
        temperature=temperature,
        messages=message
    )
    return completion


def main():
    """
    run LPR
    """
    parser = utils.initialize_parser()
    args = parser.parse_args()
    args_string = utils.get_args_string(parser)

    prompt_file = args.prompts
    llm_version = args.llm_version
    case = args.case
    benchmark_suite_folder = args.benchmark_suite
    trial_number = args.trial
    temperature = args.temperature
    multi_level = not args.disable_multi_level
    base_url = args.base_url

    client = utils.init_client(base_url)
    utils.init_language(benchmark_suite_folder)
    utils.init_root_folder(os.getcwd())

    # get prompts
    prompts = utils.load_json_file(prompt_file)

    # get current code version
    code_version = utils.get_current_version()

    # get case list
    # case_list = utils.get_benchmarks(benchmark_suite_folder, case)
    if case is None:
        case_list = utils.determine_benchmark_suite(benchmark_suite_folder)
    else:
        case_list = [case]

    for case in case_list:
        # get main folder
        main_folder = os.path.normpath(
            os.path.join("/tmp/LPR/results/", code_version, args_string, case)
        )
        os.makedirs(main_folder, exist_ok=True)

        # check previous result and skip if it is finished
        utils.LOG_FILE_NAME = os.path.join(main_folder, "log.txt")
        if os.path.exists(utils.LOG_FILE_NAME):
            with open(utils.LOG_FILE_NAME) as file:
                last_line = file.readlines()[-1]
                if "reduction ratio" in last_line:
                    continue

        # copy original files to main folder
        original_program_path = os.path.join(benchmark_suite_folder, case, utils.PROGRAM_NAME)
        original_script_path = os.path.join(benchmark_suite_folder, case, utils.SCRIPT_NAME)

        os.chdir(os.path.join(benchmark_suite_folder, case))
        if not utils.property_test():
            utils.print_and_log(f"Sanity check failed on {case}, skipped it", 0)
            continue

        main_program_path = os.path.join(main_folder, utils.PROGRAM_NAME)
        main_script_path = os.path.join(main_folder, utils.SCRIPT_NAME)

        utils.copy_file(original_program_path, main_program_path)
        utils.copy_file(original_script_path, main_script_path)

        # start
        original_program_size = utils.count_token(original_program_path)
        utils.print_and_log(f"Start reduction on {case}, original program size: {original_program_size} tokens",
                            level=0)
        iteration = 0

        program_size_before_iteration = sys.maxsize
        program_size_after_iteration = utils.count_token(main_program_path)
        smallest_program = ""

        while program_size_after_iteration < program_size_before_iteration:
            iteration_folder = os.path.join(main_folder, f"iteration_{iteration}")
            os.makedirs(iteration_folder, exist_ok=True)
            utils.copy_file(main_program_path, iteration_folder)
            utils.copy_file(main_script_path, iteration_folder)

            iteration_program_path = os.path.join(iteration_folder, utils.PROGRAM_NAME)
            iteration_script_path = os.path.join(iteration_folder, utils.SCRIPT_NAME)

            program_size_before_iteration = program_size_after_iteration
            smallest_program = utils.load_file(main_program_path)

            utils.print_and_log(f"Start iteration {iteration}, current size: {utils.count_token(main_program_path)}",
                                level=1)

            # call llm reducers
            transformations = prompts["transformations"]
            for transformation in transformations.keys():
                transformation_folder = os.path.join(iteration_folder, f"transformation_{transformation}")
                os.makedirs(transformation_folder, exist_ok=True)
                utils.copy_file(iteration_program_path, transformation_folder)
                utils.copy_file(iteration_script_path, transformation_folder)
                transformation_program_path = os.path.join(transformation_folder, utils.PROGRAM_NAME)

                utils.print_and_log(
                    f"Start transformation {transformation}, "
                    f"current size: {utils.count_token(transformation_program_path)}", level=2)

                # call llm
                program_before_transformation = utils.load_file(transformation_program_path)
                call_llm_based_reducer(client=client, prompts=prompts, transformation=transformation,
                                       output_folder=transformation_folder, llm_version=llm_version,
                                       trial_number=trial_number, temperature=temperature, multi_level=multi_level,
                                       level=2)
                program_after_transformation = utils.load_file(transformation_program_path)

                # call Perses
                if program_before_transformation != program_after_transformation:
                    utils.print_and_log("llm made progress", level=2)
                    utils.call_perses(transformation_folder, level=2)

                program_size_after_transformation = utils.count_token(transformation_program_path)
                utils.copy_file(transformation_program_path, iteration_folder)
                utils.print_and_log(f"Finished iteration {iteration}, transformation {transformation}, \
                            current size: {program_size_after_transformation} tokens", level=2)

            program_size_after_iteration = utils.count_token(iteration_program_path)
            utils.copy_file(iteration_program_path, main_folder)
            # Increase the iteration count
            iteration += 1

        utils.save_program_file(main_folder, smallest_program)
        utils.print_and_log(f"Finished reduction on {case}, reduction ratio: \
                    {program_size_before_iteration}/{original_program_size}", level=0)


if __name__ == "__main__":
    main()
