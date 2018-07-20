# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpoulter <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/18 11:14:09 by dpoulter          #+#    #+#              #
#    Updated: 2018/07/20 11:59:24 by dpoulter         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc -Wall -Wextra -Werror

NAME = filler_tester

SRC = main.c \
	  map00.c \
	  map01.c \
	  map02.c \
	  helper.c

HEAD = -Ilibft/includes/ -Iprintf/. -I.

ECHO = printf

OBJ = $(SRC:.c=.o)

CFLAGS = $(HEAD)

%.o	:	%.c
		@$(CC) $(CFLAGS) -o $@ -c $<

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
	@$(ECHO) "\033[32m[Compiling tester]\033[0m\n"

clean:
	@rm -f $(OBJ) && $(ECHO) "\033[32m[Deleting tester objects]\033[0m\n"

fclean: clean
	@rm -f $(NAME)
	@$(ECHO) "\033[32m[Deleting tester Binary]\033[0m\n"

re: fclean all
