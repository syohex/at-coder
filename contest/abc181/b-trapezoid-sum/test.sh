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

test "2
1 3
3 5" 18

test "3
11 13
17 47
359 44683" 998244353

test "1
1 1000000" 500000500000
