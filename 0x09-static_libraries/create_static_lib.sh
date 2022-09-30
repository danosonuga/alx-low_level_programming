#!/bin/bash
gcc -c -Wall -pedantic -std=gnu89 *.c
ar -rc liball.a *.o
