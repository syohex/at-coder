#!/usr/bin/env bash

source ../../../script/test_func.sh

test "abc acb" Yes
test "aabb bbaa" No
test "abcde abcde" Yes
test "abc abd" No
