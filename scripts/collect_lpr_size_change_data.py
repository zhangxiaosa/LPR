import os
import pandas as pd
import json
import sys

# Define the transformations
operations_oldname = ['complex_data_type', 'function_inlining', 'loop_unrolling', 'redundant_data_type',
                      'unnecessary_variable']
operations_name_map = {
    'complex_data_type': 'Data Type Simplification',
    'function_inlining': 'Function Inlining',
    'loop_unrolling': 'Loop Unrolling',
    'redundant_data_type': 'Data Type Elimination',
    'unnecessary_variable': 'Variable Elimination'
}
operations = ['Data Type Simplification', 'Function Inlining', 'Loop Unrolling', 'Data Type Elimination',
              'Variable Elimination']
operations_short = ['DTS', 'FI', 'LU', 'DTE', 'VE']
operations_full = ['Data Type Simplification (DTS)', 'Function Inlining (FI)', 'Loop Unrolling (LU)',
                   'Data Type Elimination (DTE)', 'Variable Elimination (VE)']

def process_target_csv(result_path, target):
    without_perses_csv = os.path.join(result_path, f'{target}_size_change_without_perses.csv')
    with_perses_csv = os.path.join(result_path, f'{target}_size_change_with_perses.csv')

    without_perses_df = pd.read_csv(without_perses_csv)
    with_perses_df = pd.read_csv(with_perses_csv)

    size_changes_before = {}
    size_changes_after = {}

    for operation in operations_oldname:
        if operation in without_perses_df.columns and operation in with_perses_df.columns:
            size_changes_before[operations_name_map[operation]] = without_perses_csv[operation].tolist()
            size_changes_after[operations_name_map[operation]] = with_perses_csv[operation].tolist()

    return size_changes_before, size_changes_after


def count_iterations(case_path):
    iteration_count = 0
    for root, dirs, files in os.walk(case_path):
        for dir in dirs:
            if dir.startswith("iteration_"):
                iteration_count += 1
    return iteration_count


def main(result_path):
    benchmark_suite = [d for d in os.listdir(result_path) if os.path.isdir(os.path.join(result_path, d))]

    size_changes_details = {
        'before': {},
        'after': {}
    }

    iteration_numbers = []

    for target in benchmark_suite:
        try:
            size_changes_before, size_changes_after = process_target_csv(result_path, target)

            for operation in operations:
                if operation not in size_changes_details['before']:
                    size_changes_details['before'][operation] = []
                    size_changes_details['after'][operation] = []

                size_changes_details['before'][operation].extend(size_changes_before.get(operation, []))
                size_changes_details['after'][operation].extend(size_changes_after.get(operation, []))

            # Count iterations and append to the list
            case_path = os.path.join(result_path, target)
            iteration_count = count_iterations(case_path)
            iteration_numbers.append(iteration_count)

        except Exception as e:
            print(f"Error processing {target}: {e}")
            continue

    # Example: size_changes_total data, you can modify this to your needs
    size_changes_total = [156, 1763, 95, 415, 409]

    result_json = {
        'operations': operations,
        'operations_short': operations_short,
        'operations_full': operations_full,
        'size_changes_details': size_changes_details,
        'size_changes_total': size_changes_total,
        'iteration_numbers': iteration_numbers
    }

    output_file = os.path.join(result_path, 'size_changes.json')
    with open(output_file, 'w') as f:
        json.dump(result_json, f, indent=4)

    print(f"Size changes saved to {output_file}")


if __name__ == "__main__":
    result_path = sys.argv[1] if len(sys.argv) > 1 else '.'
    main(result_path)
