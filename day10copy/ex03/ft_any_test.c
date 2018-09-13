/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 17:31:24 by widraugr          #+#    #+#             */
/*   Updated: 2018/09/04 18:41:40 by widraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_any(char **tab, int(*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i] != '\0')
	{
		if (f(tab[i]) == 1)
		   return (1);
		i++;
	}
	return (0);
}

int	ft_fun(char *aaa)
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
	printf("|%d ",ft_any(argv + 1, ft_fun ));
	return (0);
}

