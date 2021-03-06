/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 14:27:57 by widraugr          #+#    #+#             */
/*   Updated: 2018/08/26 16:01:21 by widraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int i;
	int j;

	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			if ((i == 1 && j == 1) || (i == y && j == 1))
				ft_putchar('o');
			else	if ((i == 1 && j == x) || (i == y && j == x))
				ft_putchar('o');
			else	if ((i == 1 || i == y) && (j != 1 || j != x))
				ft_putchar('-');
			else	if ((j == 1 || j == x) && (i > 1 && i < y))
				ft_putchar('|');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
