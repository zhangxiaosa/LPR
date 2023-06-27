#!/usr/bin/env bash

set -o pipefail
set -o nounset
set -o errexit

GO=/tmp/perses/reduction_via_gpt/compilers/go-1650f1ba0b/bin/go

$GO version | grep "+1650f1ba0b"

($GO run small.go || true) 2>&1 | grep -P "signal SIGSEGV"
