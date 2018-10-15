/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 17:48:16 by widraugr          #+#    #+#             */
/*   Updated: 2018/09/05 18:00:17 by widraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

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
