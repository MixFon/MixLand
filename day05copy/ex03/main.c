/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 11:42:03 by widraugr          #+#    #+#             */
/*   Updated: 2018/08/28 20:04:03 by widraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);
char	ft_putstr(char *str);

int		main(void)
{
	char	str[1024] = "qwer";
	char	str2[1024] = "as1232\n144124 f";
	char	*str3;

	str3 = ft_strcpy(str, str2);
	printf("%s", str3);
	return (0);
}
