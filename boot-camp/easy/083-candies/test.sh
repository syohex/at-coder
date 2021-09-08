#!/usr/bin/env bash

source ../../../script/test_func.sh

test "5
3 2 2 4 1
1 2 2 2 1" 14

test "4
1 1 1 1
1 1 1 1" 5

test "7
3 3 4 5 4 5 3
5 3 4 4 2 3 2" 29

test "1
2
3" 5
