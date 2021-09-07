#!/usr/bin/env bash

function test() {
    input=$1
    expected=$2

    exe=a.out
    if [[ -e a.exe ]]; then
        exe=a.exe
    fi

    got=$(echo -n -e $input | ./$exe)
    if [[ $got != $expected ]]; then
        printf "Got: $got, Expected: $expected\nInput: $input\n"
        exit 1
    fi
}
