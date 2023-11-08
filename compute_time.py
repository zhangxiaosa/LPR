import os
import sys

def sum_float_values(folder_path):
    total_sum = 0.0
    for root, dirs, files in os.walk(folder_path):
        for file in files:
            if file == "finish":
                file_path = os.path.join(root, file)
                try:
                    with open(file_path, 'r') as f:
                        total_sum += float(f.read())
                except ValueError as e:
                    print(f"Error: The file {file_path} does not contain a valid float value. {e}")
                except Exception as e:
                    print(f"Error: An error occurred while reading the file {file_path}. {e}")
    return total_sum

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: python script.py <folder_path>")
        sys.exit(1)

    folder_path = sys.argv[1]
    if not os.path.isdir(folder_path):
        print(f"Error: The path {folder_path} is not a valid directory.")
        sys.exit(1)

    total = sum_float_values(folder_path)
    print(f"The total sum of the float values is: {total}")

