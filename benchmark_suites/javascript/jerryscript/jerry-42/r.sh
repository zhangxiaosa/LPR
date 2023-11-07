#!/usr/bin/env bash

JERRY=/tmp/perses/reduction_via_gpt/compilers/javascript/jerryscript/jerryscript-8ba0d1b6ee-origin/build/bin/jerry
TIMEOUT=5

$JERRY --version > version.txt 2>&1
if ! grep -q "8ba0d1b6" version.txt; then
    exit 1
fi

(timeout -s 9 $TIMEOUT $JERRY small.js) > log.txt 2>&1

if [ $? -ne 134 ]; then
    exit 1
fi

if ! grep -q "timeout: the monitored command dumped core" log.txt; then
    exit 1
fi

exit 0

