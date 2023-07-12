#!/usr/bin/env bash

set -o nounset

readonly VERSION="nightly-2022-02-24"

readonly CONFIG_BUGGY='[package]
name = "bug"
version = "0.1.0"
edition = "2021"

[[bin]]
name = "bug"
path = "small.rs"

[dependencies]
primal-sieve = "0.3.2"

[profile.release]
opt-level = 2'

readonly CONFIG_CORRECT1='[package]
name = "bug"
version = "0.1.0"
edition = "2021"

[[bin]]
name = "bug"
path = "small.rs"

[dependencies]
primal-sieve = "0.3.2"

[profile.release]
opt-level = 1'

readonly OUTPUT_BUGGY="output_buggy.txt"
readonly OUTPUT_CORRECT1="output_correct1.txt"

echo "$CONFIG_BUGGY" > Cargo.toml
timeout -s 9 60 rustup run "${VERSION}" cargo run --release > ${OUTPUT_BUGGY} 2>&1
if ! grep "panicked" "${OUTPUT_BUGGY}" >& /dev/null ; then
  rm -rf target
  exit 1
fi

echo "$CONFIG_CORRECT1" > Cargo.toml
timeout -s 9 60 rustup run "${VERSION}" cargo run --release > ${OUTPUT_CORRECT1} 2>&1
if grep "panicked" "${OUTPUT_CORRECT1}" >& /dev/null ; then
  rm -rf target
  exit 1
fi

rm -rf target
exit 0

