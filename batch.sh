#!/bin/bash

cases=(clang-22382 clang-22704 clang-23309 clang-23353 clang-25900 clang-26760 clang-27137 clang-27747 clang-31259 gcc-59903 gcc-60116 gcc-61383 gcc-61917 gcc-64990 gcc-65383 gcc-66186 gcc-66375 gcc-70127 gcc-70586 gcc-71626)

for case in "${cases[@]}"
do
    echo "start $case"
    python3 perses_gpt.py --prompts configuration.json --trail 3 --case $case
done
