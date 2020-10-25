#!/usr/bin/env bash
set -e

function test() {
    input=$1
    expected=$2

    got=$(echo $input | ./a.out)
    if [[ $got != $expected ]]; then
        echo "./a.out $input: got $got, expected $expected"
        exit 1
    fi
}

test "100 1 2" "101"
test "100 2 1" "99"
test "100 1 1" "100"
