/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 18:38:16 by widraugr          #+#    #+#             */
/*   Updated: 2018/09/05 19:12:33 by widraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	ft_list_push_front(t_list *begin_list, void *data)
{
	t_list	*listnew;

	listnew = malloc(sizeof(t_list));
	if (listnew)
	{
		listnew->data = data;
		listnew->next = begin_list;
		begin_list = listnew;
	}
	return (listnew);
}

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*current;

	i = ac;
	current = ft_create_elem(av[1]);
	i = 2;
	while (av[i] != '\0')
	{
		current = ft_list_push_front(current, av[i]);
		i++;
	}
	return (current);
}
