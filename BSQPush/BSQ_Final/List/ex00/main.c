/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 14:54:42 by widraugr          #+#    #+#             */
/*   Updated: 2018/09/10 17:04:38 by widraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	main()
{
	t_list *list;

	list = NULL;
	
	list = add(list, 2,3);
	list = add(list, 5,6);
	list = add(list, 8,9);

	print_list(list);
	return (0);

}
