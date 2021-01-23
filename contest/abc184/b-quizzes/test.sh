#!/usr/bin/env bash

source ../../../script/test_func.sh

test "3 0
xox" 0

test "3 0
xox" 200017

test "20 10
xxxxxxxxxxxxxxxxxxxx" 0
