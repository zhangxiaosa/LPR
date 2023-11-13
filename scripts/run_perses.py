import os
import utils
import shutil
from concurrent.futures import ThreadPoolExecutor

def process_case(case, benchmark_suite_folder, code_version, args_string):
    main_folder = os.path.normpath(
        os.path.join("/tmp/gpt_reduction/results/", code_version, args_string, case)
    )
    os.makedirs(main_folder, exist_ok=True)

    original_program_path = os.path.join(benchmark_suite_folder, case, utils.PROGRAM_NAME)
    original_script_path = os.path.join(benchmark_suite_folder, case, utils.SCRIPT_NAME)
    
    main_program_path = os.path.join(main_folder, utils.PROGRAM_NAME)
    main_script_path = os.path.join(main_folder, utils.SCRIPT_NAME)

    shutil.copy(original_program_path, main_program_path)
    shutil.copy(original_script_path, main_script_path)
    print(main_folder)
    
    utils.print_and_log(f"Start reduction on benchmark {case}", level=0)
    utils.call_perses(main_folder, level=0)
    utils.print_and_log(f"Finished reduction on benchmark {case}", level=0)

def main():
    args = utils.initialize_args()
    print(args)
    args_string = utils.get_args_string(args)

    case = args.case
    benchmark_suite_folder = args.benchmark_suite
    print(benchmark_suite_folder)

    code_version = utils.get_current_version()
    case_list = utils.get_benchmarks(benchmark_suite_folder, case)

    max_jobs = args.max_jobs
    print(max_jobs)
    with ThreadPoolExecutor(max_workers=max_jobs) as executor:
        futures = [executor.submit(process_case, case, benchmark_suite_folder, code_version, args_string) for case in case_list]
        for future in futures:
            future.result()

if __name__ == "__main__":
    main()
