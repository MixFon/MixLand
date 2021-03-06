/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 18:49:43 by widraugr          #+#    #+#             */
/*   Updated: 2018/09/04 19:07:31 by widraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (tab[i] != '\0')
	{
		if (f(tab[i]) == 1)
			num++;
		i++;
	}
	return (num);
}
