#!/bin/bash
gcc -Wall -Wextra -Werroi -pedantic -c *.c
ar rc liball.a *.o
