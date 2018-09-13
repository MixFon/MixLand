/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 16:30:54 by widraugr          #+#    #+#             */
/*   Updated: 2018/09/04 17:19:30 by widraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	j;
	int	*arr;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
	arr = (int *)malloc(sizeof(int) * (length));
	j = 0;
	i = 0;
	while (i < length)
	{
		arr[j] = tab[i];
		i++;
		j++;
	}
	return (arr);
}
