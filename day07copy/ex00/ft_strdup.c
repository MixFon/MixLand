/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 13:22:36 by widraugr          #+#    #+#             */
/*   Updated: 2018/08/31 14:01:27 by widraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*str_cop;

	i = 0;
	while (src[i] != '\0')
		i++;
	strCop = (char*)malloc(sizeof(*src) * (i + 1));
	i = 0;
	while (src[i])
	{
		str_cop[i] = src[i];
		i++;
	}
	return (str_cop);
}
