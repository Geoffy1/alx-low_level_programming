#!/bin/bash
wget /tmp/https://raw.githubusercontent.com/Geoffy1/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libtest.so -P
export LD_PRELOAD=/tmp/libtest.so
