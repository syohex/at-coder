#!/usr/bin/env bash

function test() {
    input=$1
    expected=$2

    got=$(echo -n -e $input | ./a.out)
    if [[ $got != $expected ]]; then
        echo "Got: $got, Expected: $expected"
        exit 1
    fi
}

test "1 2 1 1" 2
test "3 5 -4 -2" -6
test "-1000000000 0 -1000000000 0" 1000000000000000000
