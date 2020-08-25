#!/usr/bin/env bash
set -e

g++ -O2 -Wall main.cpp

output=$(echo 101 | ./a.out)
if [[ $output == "2" ]]; then
  echo "Success"
else
  exit 1
fi

output=$(echo 000 | ./a.out)
if [[ $output == "0" ]]; then
  echo "Success"
else
  exit 1
fi
