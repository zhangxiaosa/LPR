#!/usr/bin/env bash

set -o pipefail
set -o nounset
set -o errexit

GO=/tmp/perses/reduction_via_gpt/compilers/go-724d0720b3/bin/go

$GO version | grep "+724d0720b3"
($GO run small.go || true) 2>&1 | grep "panic"
