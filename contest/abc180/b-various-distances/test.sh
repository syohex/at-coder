#!/usr/bin/env bash
set -e

function test() {
    input=$1

    echo "####"
    echo -e "input=$input"
    echo "####"
    echo -e $input | ./a.out 
}

test "2\n2 -1"
test "10\n3 -1 -4 1 -5 9 2 -6 5 -3"
