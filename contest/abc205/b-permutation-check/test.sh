#!/usr/bin/env bash

source ../../../script/test_func.sh

test "5
3 1 2 4 5" Yes

test "6
3 1 4 1 5 2" No

test "3
1 2 3" Yes

test "1
1" Yes
