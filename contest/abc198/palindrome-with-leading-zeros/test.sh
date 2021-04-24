#!/usr/bin/env bash

source ../../../script/test_func.sh

test 0 "Yes"
test 1210 "Yes"
test 777 "Yes"
test 123456789 "No"
test 123210000 "Yes"
