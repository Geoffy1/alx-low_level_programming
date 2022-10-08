#!/bin/bash
wget https://github.com/Geoffy1/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libtest.so -P ../
export LD_PRELOAD=../libtest.so
