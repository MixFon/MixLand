# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: widraugr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/06 14:55:32 by widraugr          #+#    #+#              #
#    Updated: 2018/09/12 19:00:14 by widraugr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAMEBIN = bsq

NAMEC = bsq.c

SRC =   func_chack_error.c func_help_main.c standart_func.c func_work_list.c addition_func.c

FILEO = func_chack_error.o func_help_main.o standart_func.o func_work_list.o addition_func.o

all: create clean

create:
	gcc -c $(SRC) 
	gcc -Wall -Wextra -Werror  $(NAMEC) -o $(NAMEBIN) $(FILEO)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAMEBIN)

re: fclean all

start:
	./bsq map
	./bsq map1
	./bsq map2
	./bsq map3

