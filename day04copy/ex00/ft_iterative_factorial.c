/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 12:20:04 by widraugr          #+#    #+#             */
/*   Updated: 2018/08/25 13:48:23 by widraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int a;

	i = 1;
	a = 1;
	if (nb == 1)
		return (1);
	else	if (nb <= 0)
		return (0);
	else
		while (i <= nb)
		{
			a = i * a;
			i++;
		}
	return (a);
}
