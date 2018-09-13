/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 16:30:54 by widraugr          #+#    #+#             */
/*   Updated: 2018/09/04 17:13:31 by widraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_putnbr(int nb)
{
	unsigned int n;

	if (nb < 0)
	{
		ft_putchar('-');
		n = -1 * nb;
	}
	else
	{
		n = nb;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	ft_putchar((char)(n % 10 + '0'));
	return (0);
}

int	*ft_map(int *tab, int length, int(*f)(int))
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
	i--;
	while (i >= 0)
	{
		arr[j] = tab[i];
		i--;
		j++;
	}
	return (arr);
}

int	main ()
{
	int i;
	int *arr2;
	int arr[7] = {1,2,3,4,5,6,7}; 
	arr2 = ft_map(arr, 7, &ft_putnbr);
	
	i = 0;
	while (i < 7)
	{
		printf("|%d ", arr2[i]);
		i++;
	}
	return (0);
}


