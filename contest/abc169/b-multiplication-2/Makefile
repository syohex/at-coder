all: test

a.out: main.cpp
	c++ -fsanitize=undefined -Wall -g main.cpp

test: a.out
	bash test.sh
