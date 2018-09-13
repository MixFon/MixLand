/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 16:48:08 by widraugr          #+#    #+#             */
/*   Updated: 2018/08/28 19:24:49 by widraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fuc(int a, int i, int n, char *str)
{
	while (str[i] != '\0')
	{
		if (str[i] == '-')
		{
			i++;
			n = -1;
		}
		else	if (str[i] >= '0' && str[i] <= '9')
		{
			a += str[i] - '0';
			a *= 10;
			if (str[i + 1] > '9')
			{
				break ;
			}
			i++;
		}
		else
			i++;
	}
	return (n * a / 10);
}

int		ft_atoi(char *str)
{
	double	a;
	int		i;
	int		n;

	a = 0;
	i = 0;
	n = 1;
	return (ft_fuc(a, i, n, str));
}
