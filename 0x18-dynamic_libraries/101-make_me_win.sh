#!/bin/bash
gcc -g -fPIC -Wall -Werror -Wextra -pedantic casino.c -shared -o libcasino.so
export LD_PRELOAD="$PWD/../libcasino.so"
