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

test "7
nikoandsolstice" "nikoand..."

test "40
ferelibenterhominesidquodvoluntcredunt" "ferelibenterhominesidquodvoluntcredunt"

test "1
a" "a"
