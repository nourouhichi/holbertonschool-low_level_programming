#!/bin/bash
curl https://github.com/nourouhichi/holbertonschool-low_level_programming/tree/master/0x18-dynamic_libraries/win.so -o win.so
export LD_PRELOAD=./win.so
