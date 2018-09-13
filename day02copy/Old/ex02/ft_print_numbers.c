/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 15:56:31 by widraugr          #+#    #+#             */
/*   Updated: 2018/08/23 15:52:51 by widraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);

int		ft_putcha(char c)
{
	write(1, &c, 1);
	return (0);
}

int		main(void)
{
	ft_print_numbers();
	return (0);
}

void	ft_print_numbers(void)
{
	int		i;
	char	a;

	a = '0';
	i = 0;
	while (i < 10)
	{
		ft_putchar(a);
		i = i + 1;
		a = a + 1;
	}
	write(1, "\n", 1);
}
