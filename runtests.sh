#!/bin/bash

gcc -Wall -c ft_isalpha.c
gcc -Wall -c ft_isdigit.c
gcc -Wall -c ft_isalnum.c
gcc -Wall -c ft_isascii.c
gcc -Wall -c test.c
gcc -o test ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o test.o
find . -type f -name '*.o' -delete
