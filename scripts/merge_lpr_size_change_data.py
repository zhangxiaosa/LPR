import os
import json
import sys

def merge_json_files(result_path):
    merged_data = {
        'operations': [],
        'operations_short': [],
        'operations_full': [],
        'size_changes_details': {
            'before': {},
            'after': {}
        },
        'size_changes_details_normalized': {
            'before': {},
            'after': {}
        },
        'size_changes_total': [],
        'size_changes_average': [],
        'iteration_numbers': []
    }

    for root, dirs, files in os.walk(result_path):
        for file in files:
            if file == 'size_changes.json':
                file_path = os.path.join(root, file)
                with open(file_path, 'r') as f:
                    data = json.load(f)

                    # Append operations and operations_full only once
                    if not merged_data['operations']:
                        merged_data['operations'] = data['operations']
                    if not merged_data['operations_short']:
                        merged_data['operations_short'] = data['operations_short']
                    if not merged_data['operations_full']:
                        merged_data['operations_full'] = data['operations_full']

                    # Merge size_changes_details
                    for key in ['before', 'after']:
                        for operation in data['size_changes_details'][key]:
                            if operation not in merged_data['size_changes_details'][key]:
                                merged_data['size_changes_details'][key][operation] = []
                            merged_data['size_changes_details'][key][operation].extend(
                                data['size_changes_details'][key][operation]
                            )

                    merged_data['iteration_numbers'].extend(data['iteration_numbers'])

    # Calculate size_changes_total
    for operation in merged_data['operations']:
        total = sum(merged_data['size_changes_details']['after'][operation])
        merged_data['size_changes_total'].append(total)
    # Calculate size_changes_average
    for operation in merged_data['operations']:
        average = sum(merged_data['size_changes_details']['after'][operation]) / len(merged_data['size_changes_details']['after'][operation])
        merged_data['size_changes_average'].append(average)

    # Normalize size_changes_details
    for key in ['before', 'after']:
        for operation in merged_data['operations']:
            normalized_values = []
            for i, value in enumerate(merged_data['size_changes_details'][key][operation]):
                if i < len(merged_data['iteration_numbers']) and merged_data['iteration_numbers'][i] != 0:
                    normalized_value = round(value / merged_data['iteration_numbers'][i], 2)
                else:
                    normalized_value = 0.0
                normalized_values.append(normalized_value)
            merged_data['size_changes_details_normalized'][key][operation] = normalized_values

    output_file = os.path.join(result_path, 'merged_size_changes.json')
    with open(output_file, 'w') as f:
        json.dump(merged_data, f, indent=4)

    print(f"Merged size changes saved to {output_file}")

if __name__ == "__main__":
    result_path = sys.argv[1] if len(sys.argv) > 1 else '.'
    merge_json_files(result_path)
