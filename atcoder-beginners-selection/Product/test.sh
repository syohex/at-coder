#!/usr/bin/env bash
set -e

g++ -O2 -Wall main.cpp
output=$(echo "3 4" | ./a.out)
if [[ $output == "Even" ]]; then
    echo "Success"
else
    exit 1
fi

output=$(echo "1 21" | ./a.out)
if [[ $output == "Odd" ]]; then
    echo "Success"
else
    exit 1
fi
