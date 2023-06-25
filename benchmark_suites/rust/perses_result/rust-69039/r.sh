#!/usr/bin/env bash

readonly REDUCTION_STAT_FILE=${REDUCTION_STAT_FILE:-""}
if [[ -n "${REDUCTION_STAT_FILE}" ]] ; then
#  echo "------------------------------------------------------------------------------" >> "/tmp/reductionstatfile.txt"
#  echo "written reduction stat file '${REDUCTION_STAT_FILE}' " >> "/tmp/reductionstatfile.txt"
#  echo "------------------------------------------------------------------------------" >> "/tmp/reductionstatfile.txt"
  date +%Y%m%d_%H%M%S_%Z >> "${REDUCTION_STAT_FILE}"
fi

set -o nounset

readonly FILE=small.rs

readonly BUGGY_RUSTC_VERSION="nightly-2020-02-10"
readonly CORRECT_RUSTC_VERSION="nightly-2020-11-05"

readonly EXE_WRONG="./wrong.out"
if ! timeout -s 9 60 rustup run "${BUGGY_RUSTC_VERSION}" rustc -o "${EXE_WRONG}" "${FILE}"; then
  exit 1
fi

readonly EXE_CORRECT="./correct.out"
if ! timeout -s 9 60 rustup run "${CORRECT_RUSTC_VERSION}" rustc -o "${EXE_CORRECT}" "${FILE}" ; then
  exit 1
fi

readonly EXE_CORRECT_2="./correct_2.out"
if ! timeout -s 9 60 rustup run "${CORRECT_RUSTC_VERSION}" rustc -Z mir-opt-level=2 -o "${EXE_CORRECT_2}" "${FILE}" ; then
  exit 1
fi

readonly OUTPUT_WRONG="wrong_output.txt"

if (echo -e "a\nb" | timeout -s 9 30 "${EXE_WRONG}") &> "${OUTPUT_WRONG}" ; then
  exit 1
fi

if ! grep "Segmentation fault" "${OUTPUT_WRONG}" ; then
  exit 1
fi

readonly OUTPUT_CORRECT_1="correct_output.txt"
readonly OUTPUT_CORRECT_2="correct_output_2.txt"
if ! timeout -s 9 30 echo -e "a\nb" | "${EXE_CORRECT}" &> "${OUTPUT_CORRECT_1}" ; then
  exit 1
fi

if ! timeout -s 9 30 echo -e "a\nb" | "${EXE_CORRECT_2}" &> "${OUTPUT_CORRECT_2}" ; then
  exit 1
fi

if ! diff "${OUTPUT_CORRECT_1}" "${OUTPUT_CORRECT_2}" ; then
  exit 1
fi

exit 0

