# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: widraugr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/04 14:31:44 by widraugr          #+#    #+#              #
#    Updated: 2018/09/04 19:13:46 by widraugr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAMELIB = libft.a

SRC = /srcs/ft_putchar.c /srcs/ft_putstr.c /srcs/ft_strcmp.c /srcs/ft_strlen.c /srcs/ft_swap.c

FILEO = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: create

create:
	gcc -c $(SRC) -I /includes
	ar rc $(NAMELIB) $(FILEO)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAMELIB)

re: fclean all

