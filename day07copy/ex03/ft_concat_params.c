/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 17:51:38 by widraugr          #+#    #+#             */
/*   Updated: 2018/08/31 13:07:53 by widraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_concat_params(int argc, char **argv);

int		ft_str_length(char *str);

int		ft_str_length(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		size;

	i = 0;
	size = 0;
	size = ft_str_length(&dest[size]);
	while (src[i])
	{
		dest[size] = src[i];
		size++;
		i++;
	}
	dest[size] = '\n';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	char	*str;
	char	*str_cop;

	i = 1;
	str = (char*)malloc(sizeof(str));
	while (i < argc)
	{
		str = ft_strcat(str, argv[i]);
		i++;
	}
	j = ft_str_length(str);
	str[j] = '\0';
	str_cop = (char*)malloc(sizeof(str) * (j));
	str_cop = str;
	return (str_cop);
}
