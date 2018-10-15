# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: widraugr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/06 14:55:32 by widraugr          #+#    #+#              #
#    Updated: 2018/09/10 17:08:45 by widraugr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAMEBIN = list

NAMEC = main.c

SRC = add.c print_list.c  

FILEO = add.o print_list.o 

all: create clean

create:
	gcc -c $(SRC) 
	gcc -Wall -Wextra -Werror $(NAMEC) -o $(NAMEBIN) $(FILEO)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAMEBIN)

re: fclean all

