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
        echo "Got: $got, Expected: $expected(Input: $input)"
        exit 1
    fi
}
