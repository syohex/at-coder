#!/usr/bin/env bash

source ../../../script/test_func.sh

test "3 4
269-6650" Yes

test "1 1
---" No

test "1 2
7444" No

test "2 2
74--44" No
