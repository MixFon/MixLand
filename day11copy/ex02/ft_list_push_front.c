/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 16:51:43 by widraugr          #+#    #+#             */
/*   Updated: 2018/09/05 17:54:15 by widraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*listnew;

	listnew = malloc(sizeof(t_list));
	if (listnew)
	{
		listnew->data = data;
		listnew->next = *begin_list;
		*begin_list = listnew;
	}
}
