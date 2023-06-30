#!/usr/bin/env bash

# good version
gvm use go1.16
go version > version.log
if !(grep -q "go1.16" version.log); then
  exit 1
fi
(go run small.go || true) > run.log 2>&1

if (grep -q "panic" run.log); then
  exit 1
fi

# buggy version
gvm use go1.17beta1
go version > version.log
if !(grep -q "go1.17beta1" version.log); then
  exit 1
fi
(go run small.go || true) > run.log 2>&1

if !(grep -q "panic" run.log); then
  exit 1
fi

exit 0
