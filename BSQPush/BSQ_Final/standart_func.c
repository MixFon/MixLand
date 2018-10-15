/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 16:48:08 by widraugr          #+#    #+#             */
/*   Updated: 2018/08/29 16:53:34 by widraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int	res;

	i = 0;
	n = 1;
	res = 0;
	while ((str[i] <= 13 && str[i] >= 9) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			n = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * n);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int size_str_map(char *str)
{
    int     i;
    int     j;
    i = col_first_str(str) + 1;
    j = 0;
    while (str[i] != '\n')
    {
        i++;
        j++;
    }
    return (j);
}

int ft_chack_file(char *str_chack)
{
	unsigned int i;
	int     cur_str;	//Number of first string
	    
	i = col_first_str(str_chack) + 1;
	cur_str = 0;
	while(str_chack[i] != '\0')
	{
		if(str_chack[i] == '\n')
			cur_str++;
		i++;
	}
	if (cur_str == real_str(str_chack))
		return (0);
	else
		return (1);
}
