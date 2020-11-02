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

test "5\n2 1 5 4 3" 4
test "5\n3 3 3 3 3" 0

