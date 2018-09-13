/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 19:12:43 by widraugr          #+#    #+#             */
/*   Updated: 2018/08/30 11:09:02 by widraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char str);

void	func_rev(char *str)
{
	int		num;

	num = 0;
	while (str[num] != '\0')
	{
		ft_putchar(str[num]);
		num++;
	}
}

int		main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = argc;
	while (argv[i])
		i++;
	while (i >= 2)
	{
		i--;
		func_rev(argv[i]);
		ft_putchar('\n');
	}
	return (0);
}
