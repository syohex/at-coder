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

test "2 3
2 2 3
3 2 2" 2

test "3 3
99 99 99
99 0 99
99 99 99" 792

test "3 2
4 4
4 4
4 4" 0
