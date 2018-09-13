/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 17:50:30 by widraugr          #+#    #+#             */
/*   Updated: 2018/08/26 17:50:38 by widraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar (char c);

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
