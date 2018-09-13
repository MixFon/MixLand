/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 15:30:27 by widraugr          #+#    #+#             */
/*   Updated: 2018/09/05 16:50:26 by widraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*current;

	current = *begin_list;
	if (current == NULL)
	{
		*begin_list = ft_create_elem(data);
	}
	else
		while (current->next != NULL)
			current = current->next;
	current->next = ft_create_elem(data);
}
