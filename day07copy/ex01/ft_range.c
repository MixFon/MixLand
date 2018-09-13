/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 13:52:29 by widraugr          #+#    #+#             */
/*   Updated: 2018/08/30 15:54:00 by widraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;
	int	num;

	i = 0;
	num = min;
	if (min >= max)
	{
		arr = (int*)malloc(1);
		return (arr);
	}
	else
	{
		arr = (int*)malloc(sizeof(*arr) * (max - min));
		while (num < max)
		{
			arr[i] = num;
			num++;
			i++;
		}
	}
	return (arr);
}
