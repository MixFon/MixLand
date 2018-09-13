/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 17:02:58 by widraugr          #+#    #+#             */
/*   Updated: 2018/09/06 19:51:04 by widraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

#define ARR_SIZE 4096

int	main(int argc, char **argv)
{
	int		i;
	int		neg;

	i = 1;
	neg = 0;
	while (argv[++i] != '\0')
	{
		if (argv[i][0] == '>')
			neg = 1;
	}
	i = 0;
	if (neg == 1)
		ft_print_dis(argv, argv[argc]);
	else
		ft_print(argv);
	return (0);
}
