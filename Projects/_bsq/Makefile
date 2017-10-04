# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkeynes <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/23 15:20:06 by tkeynes           #+#    #+#              #
#    Updated: 2017/08/23 20:25:42 by tkeynes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC		 =  main.c \
			read.c \
			print.c \
			resolve.c \
			string.c \
			parse.c \
			ft.c
OBJ = $(SRC:.c=.o)
CC=gcc
CFLAGS= -Wall -Werror -Wextra
LDFLAGS= -Wall -Werror -Wextra
EXEC=bsq

all: $(EXEC)

bsq: $(OBJ)
		$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.c
		$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(EXEC)

re: fclean all
