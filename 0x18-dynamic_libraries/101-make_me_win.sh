#!/bin/bash
wget -P /tem/ https://raw.github.com/ifezue501/alx-
low_level_programming/master/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD =/tmp/nrandom.so
