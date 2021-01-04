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

test "6
a
!a
b
!c
d
!d" a

test "10
red
red
red
!orange
yellow
!blue
cyan
!green
brown
!gray" satisfiable
