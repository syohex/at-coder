#!/usr/bin/env bash

source ../../../script/test_func.sh

test "0 0 0 1" "-1 1 -1 0"
test "2 3 6 6" "3 10 -1 7"
test "31 -41 -59 26" "-126 -64 -36 -131"
