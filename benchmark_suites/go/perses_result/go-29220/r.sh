#!/usr/bin/env bash

set -o pipefail
set -o nounset
set -o errexit

GO=/tmp/perses/reduction_via_gpt/compilers/go-213845f7b9/bin/go

$GO version | grep "+213845f7b9"
($GO build -o /dev/null small.go || true) 2>&1 | grep "internal compiler error"
