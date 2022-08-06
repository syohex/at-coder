#!/usr/bin/env bash

source ../../../script/test_func.sh

test "6 1 0 2
80 60 80 60 70 70
40 20 50 90 90 80" "1
4
5"

test "5 2 1 2
0 100 0 100 0
0 0 100 100 0" "1
2
3
4
5"
