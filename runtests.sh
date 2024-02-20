#!/bin/bash

gcc -Wall -c ft_isalpha.c
gcc -Wall -c ft_isdigit.c
gcc -Wall -c ft_isalnum.c
gcc -Wall -c ft_isascii.c
gcc -Wall -c ft_isprint.c
gcc -Wall -c ft_strlen.c
gcc -Wall -c ft_memset.c
gcc -Wall -c ft_bzero.c
gcc -Wall -c ft_memcpy.c
gcc -Wall -c test.c
gcc -o test ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_strlen.o ft_memset.o ft_bzero.o ft_memcpy.o test.o
find . -type f -name '*.o' -delete
