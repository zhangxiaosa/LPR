import os
import utils
import shutil
import concurrent.futures
import traceback


def run_benchmark(case, benchmark_suite_folder, code_version, args_string):
    """
    run a benchmark with Vulcan
    """
    try:
        main_folder = os.path.normpath(
            # os.path.join("/tmp/LPR/results/", code_version, args_string, case)
            os.path.join("/tmp/LPR/results/", args_string, case)
        )
        utils.LOG_FILE_NAME = os.path.join(main_folder, "log.txt")
        if os.path.exists(main_folder):
            utils.print_and_log(f"Benchmark {case} is done, skip it.", level=0)
            return

        os.makedirs(main_folder, exist_ok=True)

        original_program_path = os.path.join(benchmark_suite_folder, case, utils.PROGRAM_NAME)
        original_script_path = os.path.join(benchmark_suite_folder, case, utils.SCRIPT_NAME)

        main_program_path = os.path.join(main_folder, utils.PROGRAM_NAME)
        main_script_path = os.path.join(main_folder, utils.SCRIPT_NAME)

        utils.copy_file(original_program_path, main_program_path)
        utils.copy_file(original_script_path, main_script_path)
        print(f"Processing in folder: {main_folder}")

        utils.print_and_log(f"Start reduction on benchmark {case}", level=0)
        utils.call_vulcan(main_folder, level=0)
        utils.call_formatter(main_folder)
        utils.copy_file(
            os.path.join(main_folder, "vulcan", "vulcan_log.txt"),
            os.path.join(main_folder, "log.txt")
        )
        shutil.rmtree(os.path.join(main_folder, "vulcan"))
        utils.print_and_log(f"Finished reduction on benchmark {case}", level=0)
    except Exception as e:
        print(f"Error processing case {case}: {e}")
        traceback.print_exc()


def main():
    """
    run Vulcan
    """
    parser = utils.initialize_parser()
    args = parser.parse_args()
    args_string = utils.get_args_string(parser)

    case = args.case
    benchmark_suite_folder = args.benchmark_suite
    utils.init_language(benchmark_suite_folder)

    code_version = utils.get_current_version()
    case_list = utils.get_benchmarks(benchmark_suite_folder, case)

    max_jobs = args.max_jobs
    with concurrent.futures.ProcessPoolExecutor(max_workers=max_jobs) as executor:
        futures = [executor.submit(run_benchmark, c, benchmark_suite_folder, code_version, args_string) for c in
                   case_list]
        for future in futures:
            future.result()


if __name__ == "__main__":
    main()
