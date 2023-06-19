#!/bin/bash
gcc -fPIC -c *.c -o liball.o
gcc -shared liball.o -o liball.so

