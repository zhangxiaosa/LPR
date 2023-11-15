import os
import re
import sys
import csv
import utils

# Function to calculate total time from log file
def get_time_from_log(file):
    try:
        with open(file, 'r') as f:
            lines = f.readlines()
        for i in range(len(lines)-1, -1, -1):
            if "== done ==" in lines[i]:
                match = re.search(r'timestamp (\d+)', lines[i-1])
                if match:
                    return int(match.group(1))
    except FileNotFoundError:
        return None

# Function to get query number from log.txt  
def get_query_number_from_log(file):
    query_num = 0
    try:
        with open(file, 'r') as f:
            lines = f.readlines()
        for line in lines:
            match = re.search(r'(worked|failed) (\d+) times', line)
            if match:
                query_num += int(match.group(2))
    except FileNotFoundError:
        return None
    return query_num

RESULT_PATH = sys.argv[1]
benchmark_suite = utils.determine_benchmark_suite(RESULT_PATH)

with open(os.path.join(RESULT_PATH, 'summary.csv'), 'w', newline='') as csvfile:
    csv_writer = csv.writer(csvfile)
    csv_writer.writerow(["target", "token num", "time", "query num"])

    for target in benchmark_suite:
        row = [target]
        case_path = os.path.join(RESULT_PATH, target)
        log_file = os.path.join(case_path, "log.txt")

        if not os.path.exists(case_path):
            print(f"{target} is not available")
            csv_writer.writerow([target, None, None, None])
            continue

        # compute token number, time, and query number
        token_num = utils.count_token(os.path.join(case_path, utils.PROGRAM_NAME))
        time = get_time_from_log(log_file)
        query_num = get_query_number_from_log(log_file)

        print(f"target: {target}, token num: {token_num}, time: {time}, query num: {query_num}")
        row.extend([token_num, time, query_num])
        csv_writer.writerow(row)
