#!/bin/bash
gcc -shared -fPIC -ldl makemewin.c -o makemewin.so
LD_PRELOAD="./makemewin.so" ./gm 9 8 10 24 75 9
