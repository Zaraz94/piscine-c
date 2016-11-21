# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kitrosse <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/17 13:24:23 by kitrosse          #+#    #+#              #
#    Updated: 2016/09/17 13:24:25 by kitrosse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

SRC = eval_expr.c ft_atoi.c ft_putchar.c

all:
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRC)

clean:
	bin/rm -f eval_expr.o

fclean: clean
	bin/rm-f $(NAME)

re: fclean all