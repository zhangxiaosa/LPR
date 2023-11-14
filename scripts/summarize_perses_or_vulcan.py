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
def get_time_from_log(file):
    try:
        with open(file, 'r') as f:
            lines = f.readlines()
        for line in reversed(lines):
            match = re.search(r'Elapsed time is (\d+) seconds', line)
            if match:
                return int(match.group(1))
    except FileNotFoundError:
        return None

# Function to get token number from log.txt
def get_token_num_from_log(file):
    try:
        with open(file, 'r') as f:
            lines = f.readlines()
        for line in reversed(lines):
            match = re.search(r'Reduction ratio is(\d+)/\d+', line)
            if match:
                return match.group(1)
    except FileNotFoundError:
        return None

# Function to get query number from log.txt  
def get_query_number_from_log(file):
    try:
        with open(file, 'r') as f:
            lines = f.readlines()
        for line in reversed(lines):
            match = re.search(r'Test script execution count: (\d+)', line)
            if match:
                return int(match.group(1))
    except FileNotFoundError:
        return None

# Function to get iteration from log.txt  
def get_iteration_from_log(file):
    try:
        with open(file, 'r') as f:
            lines = f.readlines()
        for line in reversed(lines):
            match = re.search(r'Fixpoint\[(\d+)\]', line)
            if match:
                return int(match.group(1))
    except FileNotFoundError:
        return None

RESULT_PATH = sys.argv[1]
benchmark_suite = determine_benchmark_suite(RESULT_PATH)

with open(os.path.join(RESULT_PATH, 'summary.csv'), 'w', newline='') as csvfile:
    csv_writer = csv.writer(csvfile)
    csv_writer.writerow(["target", "time", "token num", "query num", "iteration"])

    for target in benchmark_suite:
        row = [target]
        case_path = os.path.join(RESULT_PATH, target)
        log_file = os.path.join(case_path, "log.txt")

        if not os.path.exists(case_path):
            print(f"{target} is not available")
            csv_writer.writerow([target, None, None, None, None])
            continue

        # 计算 time, token number, query number 和 iteration
        time = get_time_from_log(log_file)
        token_num = get_token_num_from_log(log_file)
        query_num = get_query_number_from_log(log_file)
        iteration = get_iteration_from_log(log_file)

        print(f"target: {target}: time: {time}, token num: {token_num}, query num: {query_num}, iteration: {iteration}")
        row.extend([time, token_num, query_num, iteration])
        csv_writer.writerow(row)