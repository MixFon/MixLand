/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 17:54:56 by widraugr          #+#    #+#             */
/*   Updated: 2018/08/31 14:05:41 by widraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	num;

	i = 0;
	num = min;
	*range = (int*)malloc(sizeof(**range) * (max - min));
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	else
	{
		while (num < max)
		{
			range[0][i] = num;
			num++;
			i++;
		}
	}
	return (i);
}
