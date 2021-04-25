#!/usr/bin/env bash

source ../../../script/test_func.sh

test "2
3 2
7 5" 3

test "3
1 5 3
10 7 3" 0

test "3
3 2 5
6 9 8" 2
