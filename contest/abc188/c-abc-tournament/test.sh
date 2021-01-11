#!/usr/bin/env bash

source ../../../script/test_func.sh

test "2
1 4 2 5" 2

test "2
3 1 5 4" 1

test "4
6 13 12 5 3 7 10 11 16 9 8 15 2 1 14 4" 2
