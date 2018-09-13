/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_recverse_alphabet.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 17:46:27 by widraugr          #+#    #+#             */
/*   Updated: 2018/08/26 17:46:34 by widraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_reverce_alphabet(void)
{
	char	z;
	int		i;

	z = 'z';
	i = 0;
	while (i < 26)
	{
		ft_putchar(z);
		i = i + 1;
		z = z - 1;
	}
	write(1, "\n", 1);
}
