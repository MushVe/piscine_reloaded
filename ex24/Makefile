# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAKEFILE                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cseguier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 10:47:41 by cseguier          #+#    #+#              #
#    Updated: 2018/11/07 15:14:07 by cseguier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
SRC= srcs/ft_putchar.c srcs/ft_putstr.c \
	srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJ= ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME):
	gcc -c $(SRC)
	ar rcs $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
