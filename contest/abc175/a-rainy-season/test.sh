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

test RRS 2
test SSS 0
test RSR 1
