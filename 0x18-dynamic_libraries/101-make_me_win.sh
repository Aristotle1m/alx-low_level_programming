#!/bin/bash
wget -O /tmp/maskman.so https://raw.github.com/nadduli/alx-low_level_programming/master/0x18-dynamic_libraries/maskman.so
export LD_PRELOAD=/tmp/maskman.so
