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
AC
TLE
AC
AC
WA
TLE" "AC x 3
WA x 1
TLE x 2
RE x 0"

test "10
AC
AC
AC
AC
AC
AC
AC
AC
AC
AC" "AC x 10
WA x 0
TLE x 0
RE x 0"
