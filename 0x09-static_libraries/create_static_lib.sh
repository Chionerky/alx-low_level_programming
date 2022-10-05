#!/bin/bash
gcc -wall -pedantic -werror -c *.c
ar rc liball.a *.o
