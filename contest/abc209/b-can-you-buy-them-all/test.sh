#!/usr/bin/env bash

source ../../../script/test_func.sh

test "2 3
1 3" Yes

test "4 10
3 3 4 4" No

test "8 30
3 1 4 1 5 9 2 6" Yes
