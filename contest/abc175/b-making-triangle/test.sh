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

test "5\n4 4 9 7 5" 5
test "6\n4 5 4 3 3 5" 8
test "10\n9 4 6 1 9 6 10 6 6 8" 39
test "2\n1 1" 0
