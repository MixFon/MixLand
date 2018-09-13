# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: widraugr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/06 17:04:17 by widraugr          #+#    #+#              #
#    Updated: 2018/09/06 19:19:39 by widraugr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAMEBIN = ft_cat

NAMEFILE = ft_cat.c

SRC = ft_print_dis.c ft_putchar.c ft_putstr.c ft_strlen.c ft_print.c

FILEO =  ft_print_dis.o  ft_putchar.o ft_putstr.o ft_strlen.o ft_print.o

all: create

create:
	gcc -c $(SRC) 
	gcc -Wall -Wextra -Werror $(NAMEFILE) -o $(NAMEBIN) $(FILEO)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAMEBIN)

re: fclean all
