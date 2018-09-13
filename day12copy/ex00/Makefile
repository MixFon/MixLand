# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: widraugr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/06 14:55:32 by widraugr          #+#    #+#              #
#    Updated: 2018/09/06 16:01:01 by widraugr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAMEBIN = ft_display_file

SRC = ft_putchar.c ft_putstr.c  

FILEO = ft_putchar.o ft_putstr.o 

all: create

create:
	gcc -c $(SRC) 
	gcc -Wall -Wextra -Werror ft_display_file.c -o $(NAMEBIN) $(FILEO)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAMEBIN)

re: fclean all

