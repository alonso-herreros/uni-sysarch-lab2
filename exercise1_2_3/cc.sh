#!/bin/bash
clear
echo Compiling P.c...
gcc -Wall -g -o P P.c
if [ ${1:-foo} == '-r' ]; then
    echo Running P.c:
    echo
    ./P
fi