##
# c-09/ex01
#
# @file
# @version 0.1

############################## Variables ####################################
CC := cc
CFLAGS := -Wall -Wextra -Werror

SRCS_DIR := ./srcs
SOURCE_FILES =	ft_putchar.c	\
				ft_putstr.c		\
				ft_strlen.c		\
				ft_swap.c		\
				ft_strcmp.c

SRCS = $(addprefix $(SRCS_DIR)/, $(SOURCE_FILES))
OBJS = $(SRCS:.c=.o)

INCLUDES_DIR := ./includes
HEADER = $(INCLUDES_DIR)/ft.h

LIBRARY = libft.a
.DEFAULT_GOAL := all

############################## Building ####################################
all: $(LIBRARY)

$(LIBRARY): $(OBJS)
	ar rc $@ $^

$(SRCS_DIR)/%.o: $(SRCS_DIR)/%.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INCLUDES_DIR)

############################## Cleaning ####################################
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(LIBRARY)

re: fclean all

############################## PHONY ##############################
.PHONY: clean fclean re all print_headers print_headers

# end
