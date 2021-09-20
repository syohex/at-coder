#!/usr/bin/env bash

source ../../../script/test_func.sh

test "2
2
2
100" 2

test "5
1
0
150" 0

test "30
40
50
6000" 213
