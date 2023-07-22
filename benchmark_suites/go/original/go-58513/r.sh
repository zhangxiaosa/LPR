#!/usr/bin/env bash

GO=/tmp/perses/reduction_via_gpt/compilers/go/go-261fe25c83/bin/go
LOG_FILE=log.txt
TIMEOUT=3

$GO version | grep "+261fe25c83"

# Run the command with a timeout of 3 seconds
timeout -s 9 $TIMEOUT $GO run small.go >$LOG_FILE 2>&1

# If the timeout command succeeded (did not time out), exit with status 1
if [ $? -ne 137 ]; then
  rm $LOG_FILE
  exit 1
fi

if ! [ "$(cat $LOG_FILE | wc -l)" -gt 100 ]; then
  rm $LOG_FILE
  exit 1
fi

rm $LOG_FILE
exit 0

