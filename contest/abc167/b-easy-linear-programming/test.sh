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

test "2 1 1 3" 2
test "1 2 3 4" 0
test "2000000000 0 0 2000000000" 2000000000
