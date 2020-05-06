#!/bin/bash
wget -O -q /tmp/win.so https://github.com/nourouhichi/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/win.so
export LD_PRELOAD=/tmp/win.so


