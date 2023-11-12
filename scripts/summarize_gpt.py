import os
import re
import sys
import csv
import benchmarks

# Function to determine the benchmark suite based on folder names in RESULT_PATH
def determine_benchmark_suite(result_path):
    for entry in os.listdir(result_path):
        print(entry)
        full_path = os.path.join(result_path, entry)
        if os.path.isdir(full_path):
            if 'gcc' in entry or 'llvm' in entry:
                return benchmarks.benchmark_suite_c
            elif 'rust' in entry:
                return benchmarks.benchmark_suite_rust
            elif 'js' in entry:
                return benchmarks.benchmark_suite_js
    return None  # Fallback in case no matching folder is found

# Function to calculate total time from 'finish' files
def calculate_total_time(path):
    total_time = 0.0
    for root, dirs, files in os.walk(path):
        for file in files:
            if file == 'finish':
                with open(os.path.join(root, file), 'r') as f:
                    try:
                        total_time += float(f.read().strip())
                    except ValueError:
                        pass  # Ignore files that do not contain a valid float
    return int(total_time)

# Function to get token number from log.txt
def get_token_num_from_log(file):
    try:
        with open(file, 'r') as f:
            lines = f.readlines()
        last_line = lines[-1] if lines else ''
        match = re.search(r'reduction ratio: (\d+)/\d+', last_line)
        return match.group(1) if match else None
    except FileNotFoundError:
        return None

RESULT_PATH = sys.argv[1]
benchmark_suite = determine_benchmark_suite(RESULT_PATH)
print(benchmark_suite)

with open(os.path.join(RESULT_PATH, 'summary.csv'), 'w', newline='') as csvfile:
    csv_writer = csv.writer(csvfile)
    csv_writer.writerow(["target", "time", "token num"])

    for target in benchmark_suite:
        row = [target]  # Initialize row with target as the first column
        case_path = os.path.join(RESULT_PATH, target)

        if not os.path.exists(case_path):
            print(f"{target} is not available")
            csv_writer.writerow([target, None, None])  # Write only target if not available
            continue

        # Calculate time
        time = calculate_total_time(case_path)

        # Get token number
        log_file = os.path.join(case_path, "log.txt")
        token_num = get_token_num_from_log(log_file)

        if token_num is None:
            print(f"{target}: token number not available")
            csv_writer.writerow([target, None, None])
        else:
            print(f"target: {target}: time: {time}, token num: {token_num}")
            row.extend([time, token_num])
            csv_writer.writerow(row)

