#!/usr/bin/env bash
set -e

function test() {
    input=$1
    expected=$2

    got=$(echo -n -e $input | ./a.out)
    if [[ "$got" != "$expected" ]]; then
        echo "./a.out $input: got $got, expected $expected"
        exit 1
    fi
}


test "6" "1
2
3
6"

test "720" "1
2
3
4
5
6
8
9
10
12
15
16
18
20
24
30
36
40
45
48
60
72
80
90
120
144
180
240
360
720"

test "1000000007" "1
1000000007"

