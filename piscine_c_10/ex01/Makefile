##
# c10/ex01
#
# @file
# @version 0.1



CC := cc
CFLAGS := -Wall -Werror -Wextra

SRCS_DIR = srcs/
SOURCE_FILES = 	main.c \
				libft.c
SRCS = $(addprefix $(SRCS_DIR), $(SOURCE_FILES))
OBJS = $(SRCS:.c=.o)

INCLUDE_DIR = includes/
HEADER_FILES = 	$(addprefix $(INCLUDE_DIR), ft.h)

TARGET = ft_cat

############################## Building ####################################
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

$(SRCS_DIR)/%.o: $(SRCS_DIR)/%.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INCLUDES_DIR)

############################## Cleaning ####################################
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all

############################## PHONY ##############################
.PHONY: clean fclean re all print_headers print_headers

############################## Printing stuff ##############################
print_objects:
	@echo $(OBJS)

print_headers:
	@echo $(HEADER)
# end
