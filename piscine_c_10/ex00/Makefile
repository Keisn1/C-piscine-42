# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/24 09:19:36 by kfreyer           #+#    #+#              #
#    Updated: 2024/07/24 09:19:49 by kfreyer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

##
# c10/ex00
#
# @file
# @version 0.1

CC := cc
CFLAGS := -Wall -Werror -Wextra
DEBUG_FLAGS := -g

SRCS_DIR = ./srcs
SOURCE_FILES = 	main.c

SRCS = $(addprefix $(SRCS_DIR)/, $(SOURCE_FILES))
OBJS = $(SRCS:.c=.o)

INCLUDES_DIR := ./includes
HEADER = $(INCLUDES_DIR)/ft.h

TARGET = ft_display_file
.DEFAULT_GOAL := all

############################## Building ####################################
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@ -I $(INCLUDES_DIR)

############################## Cleaning ####################################
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all

# Debug rule to compile with debugging information
debug: CFLAGS += $(DEBUG_FLAGS)
debug: fclean all

############################## PHONY ##############################
.PHONY: clean fclean re all print_headers print_headers

############################## Printing stuff ##############################
print_objects:
	@echo $(OBJS)

print_headers:
	@echo $(HEADER)
# end
