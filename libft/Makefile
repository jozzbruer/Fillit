# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jquince <jquince@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/16 12:33:09 by jquince           #+#    #+#              #
#    Updated: 2019/10/10 00:27:38 by jquince          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME = libft.a

CC = gcc

SRC = *.c

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
		@$(CC) $(FLAGS) -c $(SRC)
		@ar rc $(NAME) $(OBJ)
		@ranlib $(NAME)

clean:
	 @rm -f $(OBJ)

fclean: clean
	  @rm -f $(NAME)

re: fclean all
