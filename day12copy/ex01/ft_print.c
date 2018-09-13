/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 19:14:37 by widraugr          #+#    #+#             */
/*   Updated: 2018/09/06 19:50:04 by widraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"
#define ARR_SIZE 4096

void	ft_print(char **str)
{
	int		op;
	int		rea;
	int		i;
	char	buf[ARR_SIZE + 1];

	i = 0;
	while (str[++i])
	{
		if ((op = open(str[i], O_RDONLY)) == -1)
			ft_putstr("File no found.\n");
		rea = read(op, buf, ARR_SIZE);
		buf[rea] = '\0';
		ft_putstr(buf);
		if (close(op) == -1)
			ft_putstr("close error\n");
	}
}
