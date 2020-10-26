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

test "5
1 2
6 6
4 4
3 3
3 2" "Yes"

test "5
1 1
2 2
3 4
5 5
6 6" "No"

test "6
1 1
2 2
3 3
4 4
5 5
6 6" "Yes"
