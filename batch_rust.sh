#!/bin/bash

cases=(rust-44800 rust-69039 rust-77002 rust-77320 rust-77323 rust-77910 rust-77919 rust-78005 rust-78325 rust-78651 rust-78652 rust-78655 rust-78720)

for case in "${cases[@]}"
do
    echo "start $case"
    python3 perses_gpt.py --prompts configuration_rust.json --benchmark_suite ./benchmark_suites/rust/perses_result --case $case $1
    echo -e "\n\n\n"
done
