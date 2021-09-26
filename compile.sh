# This is simple bash script to compile the C files

#!bin/bash

echo "Enter the name of file you want to compile and run"

ls

echo ""

read

echo ""

gcc $REPLY.c

./a.out
