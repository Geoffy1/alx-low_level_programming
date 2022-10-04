#!/bin/bash
wget -P .. https://raw.githubusercontent.com/Geoffy1/alx-low_level_programming/master/0x18-dynamic_libraries/libcasino.so
export LD_PRELOAD="$PWD/../libcasino.so"
