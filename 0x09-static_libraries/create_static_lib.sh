#!/bin/bash
gcc -Wall -pedantic -Werror -Wectra -c *.c
ar -rc liball.a *.o
ranlib liball.a
