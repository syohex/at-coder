#!/usr/bin/env bash

source ../../../script/test_func.sh

test "2
-3 6
4 2" Yes

test "2
4 5
-1 -3" No

test "3
1 3 5
3 -6 3" Yes
