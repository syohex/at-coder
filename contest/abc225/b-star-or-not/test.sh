#!/usr/bin/env bash

source ../../../script/test_func.sh

test "5
1 4
2 4
3 4
4 5" Yes

test "4
2 4
1 4
2 3" No

test "10
9 10
3 10
4 10
8 10
1 10
2 10
7 10
6 10
5 10" Yes
