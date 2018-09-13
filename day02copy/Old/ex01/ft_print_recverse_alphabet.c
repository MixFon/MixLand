/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_recverse_alphabet.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 15:52:14 by widraugr          #+#    #+#             */
/*   Updated: 2018/08/23 15:20:33 by widraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverce_alphabet(void);

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		main(void)
{
	ft_print_reverce_alphabet();
	return (0);
}

void	ft_print_reverce_alphabet(void)
{
	char	z;
	int		i;

	z = 'z';
	i = 0;
	while (i < 26)
	{
		ft_putchar(z);
		i = i + 1;
		z = z - 1;
	}
	write(1, "\n", 1);
}
