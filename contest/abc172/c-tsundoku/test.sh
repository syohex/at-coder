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

test "3 4 240
60 90 120
80 150 80 150" 3

test "3 4 730
60 90 120
80 150 80 150" 7

test "5 4 1
1000000000 1000000000 1000000000 1000000000 1000000000
1000000000 1000000000 1000000000 1000000000" 0

test "2 2 4
3 1
2 3" 2
