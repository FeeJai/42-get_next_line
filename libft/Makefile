# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fjankows <fjankows@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/18 18:31:57 by fjankows          #+#    #+#              #
#    Updated: 2020/02/25 18:32:40 by fjankows         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra

SOURCES = ./libft.h
CFILES = *.c

NAME = libft.a

$(NAME):
	$(CC) $(CFLAGS) -c $(CFILES)
	ar rcs $(NAME) *.o
	ranlib $(NAME)

.PHONY: clean fclean re

all: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
