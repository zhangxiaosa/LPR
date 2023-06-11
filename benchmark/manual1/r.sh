#!/bin/bash

gcc small.c

./a.out > out1.txt
if ! grep -e "^3$" out1.txt ; then
  exit 1
fi

exit 0
