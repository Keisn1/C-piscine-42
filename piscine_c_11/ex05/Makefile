# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/25 09:24:58 by kfreyer           #+#    #+#              #
#    Updated: 2024/07/25 09:25:00 by kfreyer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

##
# 11/ex05
#
# @file
# @version 0.1

CC = cc
CFLAGS = -Wall -Werror -Wextra

SRCS_DIR = srcs/
SOURCES = 	main.c 			\
			calculations.c	\
			libft.c

SRCS = $(addprefix $(SRCS_DIR), $(SOURCES))
OBJS = $(SRCS:.c=.o)

INCLUDES_DIR = includes/
HEADER_FILES = 	$(addprefix $(INCLUDE_DIR), ft.h)

TARGET = do-op

all: $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

$(SRCS_DIR)/%.o: $(SRCS_DIR)/%.c $(HEADER_FILES)
	$(CC) $(CFLAGS) $^ -o $@ -I $(INCLUDES_DIR)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: clean fclean re all
# end
