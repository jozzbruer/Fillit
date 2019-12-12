# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jquince <jquince@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/09 17:12:52 by jquince           #+#    #+#              #
#    Updated: 2019/12/11 16:55:27 by jquince          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME = fillit
SRCS = *.c
OBJS = *.o
HEADER = fillit.h
FLAGS = -Wall -Wextra -Werror -g

LIBFT = libft/

all: $(NAME)

$(NAME):
		make -C $(LIBFT)
		gcc $(FLAGS) -o $(NAME) $(SRCS) -I $(HEADER) -L. libft/libft.a

clean: 
	/bin/rm -f $(OBJS)
	make -C $(LIBFT) clean

fclean: clean
	/bin/rm -f $(OBJS) $(NAME)
	make -C $(LIBFT) fclean

re: fclean all 