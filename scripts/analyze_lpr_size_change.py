import os
import sys
import csv
import utils
import shutil
from concurrent.futures import ThreadPoolExecutor, as_completed
import multiprocessing
import uuid


def extract_transformations(case_path):
    """
    extract transformations used on a benchmark
    """
    transformations = set()
    for root, dirs, files in os.walk(case_path):
        for dir in dirs:
            if dir.startswith("operation_"):
                transformation = dir.replace("operation_", "")
                transformations.add(transformation)
    return sorted(transformations)


def compute_size_changes_of_transformation_without_perses(case_path, transformation):
    """
    compute the size changes brought about by the transformation alone
    """
    total_diff = 0

    # Recursively search for all folders named transformation_{transformation}
    for root, dirs, files in os.walk(case_path):
        for directory in dirs:
            if directory == f"operation_{transformation}":
                transformation_folder = os.path.join(root, directory)
                program_file = os.path.join(transformation_folder, transformation, utils.PROGRAM_NAME)
                orig_file = os.path.join(transformation_folder, transformation, utils.PROGRAM_NAME + ".orig")

                # Ensure both files exist
                if os.path.exists(program_file) and os.path.exists(orig_file):
                    program_count = utils.count_token(program_file)

                    # Create a unique temporary directory
                    tmp_folder = os.path.join("/tmp", str(uuid.uuid4()))
                    os.makedirs(tmp_folder, exist_ok=True)
                    tmp_orig_file = os.path.join(tmp_folder, utils.PROGRAM_NAME)

                    # Copy and rename .orig file
                    utils.copy_file(orig_file, tmp_orig_file)

                    orig_count = utils.count_token(tmp_orig_file)
                    diff = program_count - orig_count
                    total_diff += diff

                    # Clean up the temporary folder
                    shutil.rmtree(tmp_folder)

    return total_diff


def compute_size_changes_of_transformation_with_perses(case_path, transformation):
    """
    compute the size changes brought about by the transformation + followup Perses
    """
    total_diff = 0

    # Recursively search for all folders named transformation_{transformation}
    for root, dirs, files in os.walk(case_path):
        for dir in dirs:
            if dir == f"operation_{transformation}":
                transformation_folder = os.path.join(root, dir)
                program_file = os.path.join(transformation_folder, "perses", utils.PROGRAM_NAME)
                orig_file = os.path.join(transformation_folder, transformation, utils.PROGRAM_NAME + ".orig")

                # Ensure both files exist
                if os.path.exists(program_file) and os.path.exists(orig_file):
                    program_count = utils.count_token(program_file)

                    # Create a unique temporary directory
                    tmp_folder = os.path.join("/tmp", str(uuid.uuid4()))
                    os.makedirs(tmp_folder, exist_ok=True)
                    tmp_orig_file = os.path.join(tmp_folder, utils.PROGRAM_NAME)

                    # Copy and rename .orig file
                    utils.copy_file(orig_file, tmp_orig_file)

                    orig_count = utils.count_token(tmp_orig_file)
                    diff = program_count - orig_count
                    total_diff += diff

                    # Clean up the temporary folder
                    shutil.rmtree(tmp_folder)

    return total_diff


def process_target(target, case_path, all_transformations):
    row_without_perses = [target]
    row_with_perses = [target]

    if not os.path.exists(case_path):
        row_without_perses.extend([None] * len(all_transformations))
        row_with_perses.extend([None] * len(all_transformations))
        return row_without_perses, row_with_perses

    for transformation in sorted(all_transformations):
        diff_without_perses = compute_size_changes_of_transformation_without_perses(case_path, transformation)
        diff_with_perses = compute_size_changes_of_transformation_with_perses(case_path, transformation)
        row_without_perses.append(diff_without_perses)
        row_with_perses.append(diff_with_perses)

    return row_without_perses, row_with_perses


def main():
    """
    analyze the size changes after each transformation, with or without the followup Perses execution
    """
    RESULT_PATH = sys.argv[1]
    benchmark_suite = utils.determine_benchmark_suite(RESULT_PATH)
    utils.init_language(RESULT_PATH)

    all_transformations = set()
    for target in benchmark_suite:
        case_path = os.path.join(RESULT_PATH, target)
        transformations = extract_transformations(case_path)
        all_transformations.update(transformations)

    header = ["target"] + sorted(all_transformations)
    print(header)

    # Set the maximum number of threads based on the number of CPU cores
    max_threads = multiprocessing.cpu_count()

    with ThreadPoolExecutor(max_workers=max_threads) as executor:
        future_to_target = {
            executor.submit(process_target, target, os.path.join(RESULT_PATH, target), all_transformations): target for
            target in benchmark_suite}

        for future in as_completed(future_to_target):
            target = future_to_target[future]
            try:
                row_without_perses, row_with_perses = future.result()
                without_perses_csv = os.path.join(RESULT_PATH, f'{target}_size_change_without_perses.csv')
                with_perses_csv = os.path.join(RESULT_PATH, f'{target}_size_change_with_perses.csv')

                with open(without_perses_csv, 'w', newline='') as csvfile_without_perses:
                    csv_writer_without_perses = csv.writer(csvfile_without_perses)
                    csv_writer_without_perses.writerow(header)
                    csv_writer_without_perses.writerow(row_without_perses)

                with open(with_perses_csv, 'w', newline='') as csvfile_with_perses:
                    csv_writer_with_perses = csv.writer(csvfile_with_perses)
                    csv_writer_with_perses.writerow(header)
                    csv_writer_with_perses.writerow(row_with_perses)

                print(f"Processed {target}")
            except Exception as e:
                print(f"Exception for {target}: {e}")


if __name__ == "__main__":
    main()
