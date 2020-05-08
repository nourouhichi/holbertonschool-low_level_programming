#!/bin/bash
wget -P /tmp wget https://github.com/nourouhichi/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/101-make_me_win.so
export LD_PRELOAD=/tmp/101-make_me_win.so
