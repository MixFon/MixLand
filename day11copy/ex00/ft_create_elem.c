/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 13:26:54 by widraugr          #+#    #+#             */
/*   Updated: 2018/09/05 17:17:58 by widraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*listnew;

	listnew = malloc(sizeof(t_list));
	if (listnew)
	{
		listnew->data = data;
		listnew->next = NULL;
	}
	return (listnew);
}
