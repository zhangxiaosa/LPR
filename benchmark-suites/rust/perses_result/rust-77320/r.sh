#!/usr/bin/env bash

readonly REDUCTION_STAT_FILE=${REDUCTION_STAT_FILE:-""}
if [[ -n "${REDUCTION_STAT_FILE}" ]] ; then
#  echo "------------------------------------------------------------------------------" >> "/tmp/reductionstatfile.txt"
#  echo "written reduction stat file '${REDUCTION_STAT_FILE}' " >> "/tmp/reductionstatfile.txt"
#  echo "------------------------------------------------------------------------------" >> "/tmp/reductionstatfile.txt"
  date +%Y%m%d_%H%M%S_%Z >> "${REDUCTION_STAT_FILE}"
fi
set -o nounset
set -o pipefail

readonly SIGNATURE='the compiler unexpectedly panicked. this is a bug.'
readonly OUTPUT="compilation_output.txt"
readonly INPUT=small.rs
trap "rm -f $OUTPUT" EXIT
if timeout -s 9 30 rustup run nightly-2020-09-28 rustc --crate-type=staticlib -C debuginfo=2 -C opt-level=2 -C target-cpu=skylake ${INPUT} &> "${OUTPUT}" ; then 
  exit 1
fi
if grep --quiet "${SIGNATURE}" "${OUTPUT}" ; then 
  exit 0
else
  exit 1
fi
