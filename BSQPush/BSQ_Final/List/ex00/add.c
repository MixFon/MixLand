/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_link.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 15:02:53 by widraugr          #+#    #+#             */
/*   Updated: 2018/09/10 17:03:02 by widraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*add(t_list *list, int cor_i, int cor_j)
{
	t_list *listnew;

	listnew = malloc(sizeof(t_list));
	if (listnew)
	{
		listnew->cor_i = cor_i;
		listnew->cor_j = cor_j;
		listnew->next = list;
	}
	return (listnew);
}
