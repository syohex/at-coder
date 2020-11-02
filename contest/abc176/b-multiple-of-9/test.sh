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

test 123456789 Yes
test 0 Yes
test 31415926535897932384626433832795028841971693993751058209749445923078164062862089986280 No
