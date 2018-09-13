/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 12:46:57 by widraugr          #+#    #+#             */
/*   Updated: 2018/09/06 16:01:45 by widraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

#define ARR_SIZE 4096

int	main(int argc, char **argv)
{
	int		op;
	int		rea;
	char	buf[ARR_SIZE + 1];

	if (argc > 2 || argc < 1)
	{
		ft_putstr("Too many arguments.\n");
		return (1);
	}
	else	if ((op = open(argv[1], O_RDONLY)) == -1)
	{
		ft_putstr("File no found.");
		return (1);
	}
	rea = read(op, buf, ARR_SIZE);
	buf[rea] = '\0';
	ft_putstr(buf);
	if (close(op) == -1)
	{
		ft_putstr("close error");
		return (1);
	}
	return (0);
}
