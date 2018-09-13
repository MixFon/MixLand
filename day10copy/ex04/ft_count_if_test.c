/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 18:49:43 by widraugr          #+#    #+#             */
/*   Updated: 2018/09/04 19:07:45 by widraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_if(char **tab, int(*f)(char*))
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

int ft_fun(char *aaa)
{
	int i;

	i = 0;
	while(aaa[i] != '\0')
	{
		if (aaa[i] == '1')
			return (1);
		i++;
	}
	return (0);
}

int main (int argc, char **argv)
{
	int i;

	i = argc;
	printf("|%d ",ft_count_if(argv + 1, ft_fun ));
	return (0);
}


