/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 19:46:40 by widraugr          #+#    #+#             */
/*   Updated: 2018/08/30 19:53:53 by widraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	func(int hour2)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour2 == 0)
	{
		printf("%d.00 A.M. AMD %d.00 A.M.\n", 12, 1);
	}
	else	if (hour2 == 23)
	{
		printf("%d.00 P.M. AMD %d.00 A.M.\n", 11, hour2 - 11);
	}
	else	if (hour2 == 24)
	{
		printf(" %d.00 A.M. AMD %d.00 A.M.\n", 12, 1);
	}
	else
		printf("%d\n", 0);
}

void	ft_takes_place(int hour)
{
	if (hour > -1 && hour < 12 && hour != 0 && hour != 11)
	{
		printf("%d.00 A.M. AMD %d.00 A.M.\n", hour, hour + 1);
	}
	else	if (hour > 12 && hour < 24)
	{
		printf("%d.00 P.M. AMD %d.00 P.M.\n", hour - 12, hour - 11);
	}
	else	if (hour == 11)
	{
		printf("%d.00 A.M. AMD %d.00 P.M.\n", 11, hour + 1);
	}
	else	if (hour == 12)
	{
		printf("%d.00 P.M. AMD %d.00 P.M.\n", 12, hour - 11);
	}
	else
		func(hour);
}
