#!/usr/bin/env bash

source ../../../script/test_func.sh

test "5
snuke
snuke
takahashi
takahashi
takahashi" takahashi

test "5
takahashi
takahashi
aoki
takahashi
snuke" takahashi

test "1
a" a
