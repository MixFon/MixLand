/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 11:42:03 by widraugr          #+#    #+#             */
/*   Updated: 2018/08/28 19:26:39 by widraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str);
void	ft_putstr(char *str);

int		main(void)
{
	char	*str;

	str = "\t\n\v\f\r +256";
	printf("%d", ft_atoi(str));
	return (0);
}
