/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 15:51:18 by widraugr          #+#    #+#             */
/*   Updated: 2018/08/23 15:09:39 by widraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

int		ft_putchar (char c);

int		main(void)
{
	ft_print_alphabet();
	return (0);
}

void	ft_print_alphabet(void)
{
	char	a;
	int		i;

	a = 'a';
	i = 0;
	while (i < 26)
	{
		ft_putchar(a);
		i = i + 1;
		a = a + 1;
	}
	write(1, "\n", 1);
}

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
