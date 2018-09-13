/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 20:39:11 by widraugr          #+#    #+#             */
/*   Updated: 2018/08/28 20:56:18 by widraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	n;
	int	j;

	i = 0;
	n = 0;
	j = 0;
	while (to_find[j])
		j++;
	if (j == 0)
		return (str);
	while (str[i])
	{
		while (to_find[n] == str[i + n])
		{
			if (n == j - 1)
				return (str + i);
			n++;
		}
		n = 0;
		i++;
	}
	return (0);
}
