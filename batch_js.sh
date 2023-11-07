#!/bin/bash

cases=(js-1 js-2 js-3 js-4 js-5 js-6 js-7 js-8 js-9 js-10)

for case in "${cases[@]}"
do
    echo "start $case"
    python3 perses_gpt.py --prompts configuration_js.json --benchmark_suite ./benchmark_suites/javascript/perses_results --case $case $1
    echo -e "\n\n\n"
done
