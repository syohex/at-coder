#!/usr/bin/env bash

source ../../../script/test_func.sh

test "3 3
1 7
3 2
1 7" 702

test "3 2
2 1
2 3" -1

test "3 1
1 0" -1
