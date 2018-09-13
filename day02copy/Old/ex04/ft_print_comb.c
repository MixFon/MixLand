/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 11:45:24 by widraugr          #+#    #+#             */
/*   Updated: 2018/08/23 13:18:01 by widraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb(void);

int ft_putchar (char c)
{
	write (1, &c, 1);
	return (0);
}

int main()
{
	ft_print_comb();
	return (0);
}

void ft_print_comb(void)
{
	char a, b,c;
	a = '0';
	while(a <= '9')
	{
		b = '0';
		while(b <= '9')
		{
			c = '0';
			while (c <= '9')
			{
				if(a < c && a!=b && b!=c && a != c)
				{
					ft_putchar(a);
					ft_putchar(b);
					ft_putchar(c);
					ft_putchar(' ');
				}
				c = c+1;
			}
			b = b+1;
		}
		a = a+1;
	}
}
