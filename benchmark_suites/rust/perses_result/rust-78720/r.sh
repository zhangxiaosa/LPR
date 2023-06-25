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

readonly OUTPUT="temp_compilation_output.tmp.txt"
readonly INPUT=small.rs
trap "rm -f $OUTPUT" EXIT
if timeout -s 9 30 rustup run nightly-2020-11-03 rustc --crate-type=staticlib -C debuginfo=2 -C opt-level=1 -C target-cpu=skylake "${INPUT}" &> "${OUTPUT}" ; then 
  exit 1
fi

if ! grep --quiet --fixed-strings "error: internal compiler error: /rustc/338f939a8d77061896cd0a1ca87a2c6d1f4ec359/compiler/rustc_middle/src/ty/sty.rs" "${OUTPUT}" ; then
  exit 1
fi

if ! grep --quiet --fixed-strings "thread 'rustc' panicked at 'Box<Any>'" "${OUTPUT}" ; then
  exit 1
fi

if ! grep --quiet --fixed-strings "note: the compiler unexpectedly panicked. this is a bug." "${OUTPUT}" ; then
  exit 1
fi
exit 0
