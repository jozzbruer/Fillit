# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jquince <jquince@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/09 17:12:52 by jquince           #+#    #+#              #
#    Updated: 2019/12/11 18:51:05 by lde-la-g         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME = fillit
SRCS = *.c
OBJS = *.o
HEADER = fillit.h
FLAGS = -Wall -Wextra -Werror 

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
