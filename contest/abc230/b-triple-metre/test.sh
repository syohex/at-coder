#!/usr/bin/env bash

source ../../../script/test_func.sh

test "xoxxoxxo" Yes
test "xxoxxoxo" No
test "ox" Yes
test "o" Yes
test "x" Yes
test "oo" No
test "xx" Yes
test "xxx" No
test "oxxxxxxxxxx" No
