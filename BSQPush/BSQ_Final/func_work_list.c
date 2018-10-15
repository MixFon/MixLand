/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 09:40:57 by widraugr          #+#    #+#             */
/*   Updated: 2018/09/11 15:52:21 by widraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"


int	ft_find_sq(t_list *list, int cor_i, int cor_j, int beg_i, int beg_j)
{
	int	negi;
	int	negj;
	t_list	*listnew;

	listnew = list;
	negi = 0;
	negj = 0;
	while (listnew != NULL)
	{
		if (cor_i == listnew->cor_i && cor_j >= listnew->cor_j && listnew->cor_j > beg_j)
		{
			negi = 1;
			return (negi);
		}
		if (cor_j == listnew->cor_j && cor_i >= listnew->cor_i && listnew->cor_i > beg_i)
		{
			negj = 1;
			return (negj);
		}
		if (negj == 1 && negi == 1)
			return (1);
		listnew = listnew->next;
	}
	return (negi * negj);
}


int	ft_list_size(t_list *begin_list)
{
	int		num;
	t_list	*listnew;

	num = 0;
	listnew = begin_list;
	while (listnew != NULL)
	{
		num++;
		listnew = listnew->next;
	}
	return (num);
}

t_list    *ft_max(t_list *begin_list)
{
    int        max;
    t_list    *listnew;
    t_list    *list_cop;
    
    listnew = begin_list;
    max = listnew->num;
    while (listnew != NULL)
    {
        if (listnew->num >= max)
        max = listnew->num;
        listnew = listnew->next;
    }
    listnew = begin_list;
    while (listnew != NULL)
    {
        if (max == listnew->num)
           list_cop = listnew;
        listnew = listnew->next;
    }
    
    return (list_cop);
}
