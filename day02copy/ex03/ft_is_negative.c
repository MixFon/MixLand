/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 17:49:01 by widraugr          #+#    #+#             */
/*   Updated: 2018/08/26 17:49:20 by widraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		ft_putchar('P');
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('N');
		ft_putchar('\n');
	}
}