#!/bin/bash
rm *.so ; gcc -c -fPIC *.c ; gcc -shared -o liball.so *.o ; rm *.o
