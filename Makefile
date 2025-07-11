# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psantos- <psantos-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/17 15:39:09 by psantos-          #+#    #+#              #
#    Updated: 2025/07/01 20:50:37 by psantos-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB_DIR = lib/
CC = cc
CFLAGS = -Wall -Werror -Wextra -Iinclude -I$(LIB_DIR)include
RM = rm -rf

LIB = $(LIB_DIR)libft.a
NAME = push_swap

SRC = main.c errors.c init_structs.c ops_1.c ops_2.c ops_3.c sort.c sort_aux_1.c sort_aux_2.c
OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(LIB):
	$(MAKE) -C $(LIB_DIR)

%.o: %.c push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(LIB) $(OBJ)
	$(CC) $(OBJ) -o $@ $(LIB)

clean:
	$(RM) $(OBJ)
	$(MAKE) -C $(LIB_DIR) clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIB_DIR) fclean

re: fclean all

test:
	curl -L -o test.sh https://raw.githubusercontent.com/biertisch/42_push_swap/refs/heads/main/test.sh
	chmod +x test.sh

.PHONY: all clean fclean re
