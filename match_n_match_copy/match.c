/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 11:37:02 by widraugr          #+#    #+#             */
/*   Updated: 2018/09/02 12:54:15 by widraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	g_ifunc;

int	g_neg;

int	match(char *str, char *str2);

int	find_char(int n_str1, char c, char *str);

int	count_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i - 1);
}

int	match_body(char *str1, char *str2, int i, int j)
{
	while (str1[i] || str2[j])
	{
		if (str2[j] == '*')
		{
			if (str2[j + 1] == '\0')
				return (1);
			g_neg = find_char(i, str2[j + 1], str1);
			i = g_ifunc - 1;
		}
		else	if (str1[i] == str2[j])
			g_neg = 1;
		else
			return (0);
		if (((str1[i] == '\0' && str2[j] != '\0') ||
					(str1[i] != '\0' && str2[j] == '\0')))
			return (0);
		i++;
		j++;
	}
	if (g_neg == 1)
		return (1);
	else
		return (0);
}

int	main(void)
{
	printf("%d\n", match("absdfgc", "ab*c"));
	return (0);
}

int	match(char *str1, char *str2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	g_neg = 0;
	if ((str1[i] == '\0' && str2[j] == '\0') || ((str2[0] == '*' && !str2[1])))
		return (1);
	return (match_body(str1, str2, i, j));
}

int	find_char(int n_str1, char c, char *str)
{
	while (str[n_str1] != '\0')
	{
		if (str[count_str(str)] == c)
		{
			g_ifunc = count_str(str);
			return (1);
		}
		else	if (str[n_str1] == c)
		{
			g_ifunc = n_str1;
			return (1);
		}
		n_str1++;
	}
	return (0);
}
