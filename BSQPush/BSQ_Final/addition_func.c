/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   col_first_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 17:24:42 by widraugr          #+#    #+#             */
/*   Updated: 2018/09/12 17:24:44 by widraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int     col_first_str(char *str)
{
    int     i;
    int     j;
    i = 0;
    j = 0;
    while (str[i] != '\n')
    {
        i++;
        j++;
    }
    return (j);
}

int ft_num_str(char *str_chack)
{
    int     i;
    int     j;
    int     k;
    int     num_emp;
    int     neg;
    i = col_first_str(str_chack) + 1;
    j = 0;
    k = 0;
    neg  = 0;
    num_emp = col_first_str(str_chack) - 3;
    while (str_chack[i] != '\n')
    {
        i++;
        j++;
    }
    i = col_first_str(str_chack) + 1;
    while(str_chack[i] != '\0')
    {
        if(str_chack[i] != str_chack[num_emp] && str_chack[i] != str_chack[num_emp + 1] && str_chack[i] != '\n')
            return (1);
        if(str_chack[i] != '\n')
            k++;
        else if (k != j)
            neg = 1;
        else
            k = 0;
        i++;
    }
    return (neg);
}

void	print_list(t_list *list)
{
	while (list)
	{
	printf("%d", list->cor_i);
	printf(" \t%d", list->cor_j);
	printf(" \t%d\n", list->num);
	list = list->next;
	}
}

int real_str(char *str)
{
    char str_cop[10];
    int i;
    i = 0;
    while (i < col_first_str(str) - 3)
    {
        str_cop[i] = str[i];
        i++;
    }
    return (ft_atoi(str_cop));
}
