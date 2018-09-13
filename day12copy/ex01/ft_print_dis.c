/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_dis.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 17:52:10 by widraugr          #+#    #+#             */
/*   Updated: 2018/09/06 19:51:56 by widraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"
#define ARR_SIZE 4096

void	ft_print_dis(char **str, char *name)
{
	int		op;
	int		wr;
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
		if ((wr = open(name, O_WRONLY | O_CREAT | O_APPEND)) == -1)
			ft_putstr("File no found.\n");
		write(wr, buf, ft_strlen(buf));
		if (close(op) == -1)
			ft_putstr("close error\n");
		if (close(wr) == -1)
			ft_putstr("close error\n");
	}
}
