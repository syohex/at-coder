#!/usr/bin/env bash

source ../../../script/test_func.sh

test "kyoto
tokyo" Yes

test "abc
arc" No

test "aaaaaaaaaaaaaaab
aaaaaaaaaaaaaaab" Yes

