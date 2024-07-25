#!/usr/bin/env sh

CC_FLAGS="-Wall -Werror -Wextra"

cc $CC_FLAGS -c -o ft_putchar.o ft_putchar.c
cc $CC_FLAGS -c -o ft_putstr.o ft_putstr.c
cc $CC_FLAGS -c -o ft_swap.o ft_swap.c
cc $CC_FLAGS -c -o ft_strlen.o ft_strlen.c
cc $CC_FLAGS -c -o ft_strcmp.o ft_strcmp.c

# Creaiting a library
ar rc libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

rm ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
