#!/usr/bin/env bash
set -e

input="1
2 3
test"

g++ -O2 -Wall main.cpp
output=$(echo $input | ./a.out)
if [[ "$output" == "6 test" ]]; then
  echo Success
  exit 0
else
  echo "Failed: $output"
  exit 1
fi
