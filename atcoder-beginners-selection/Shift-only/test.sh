#!/usr/bin/env bash
set -e

g++ -O2 -Wall main.cpp

input="3
8 12 40
"

output=$(echo $input | ./a.out)
if [[ $output == "2" ]]; then
    echo "Success"
else
    exit 1
fi

input="4
5 6 8 10"

output=$(echo $input | ./a.out)
if [[ $output == "0" ]]; then
    echo "Success"
else
    exit 1
fi

input="6
382253568 723152896 37802240 379425024 404894720 471526144"

output=$(echo $input | ./a.out)
if [[ $output == "8" ]]; then
    echo "Success"
else
    exit 1
fi
