#!/usr/bin/env bash

set -o pipefail
set -o nounset
set -o errexit

GO=/tmp/perses/reduction_via_gpt/compilers/go-a361ef36af/bin/go

$GO version | grep "+a361ef36af"
($GO run small.go || true) 2>&1 | grep "signal SIGSEGV"
