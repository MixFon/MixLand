/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 13:06:30 by widraugr          #+#    #+#             */
/*   Updated: 2018/09/11 18:27:17 by widraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	create_min_arr(char *buf)
{
    int		i;
    int		x;
	int		k;
	int		j;
    int		n;
    int		num;
	char    arr[g_n_str + 2][g_n_col + 1 + 2];
	k = 0;
    x = 0;
	j = 0;
    i = col_first_str(buf) + 1;		//Начали со второй строки функция подсчета букв первой строки
	while(buf[i] != '\0')
	{
		if(buf[i] != '\n')
		{
			arr[j][k] = buf[i];
			k++;
		}
		 else
		{
			arr[j][k + 1] = '\0';
			j++;
			k = 0;
		}
		i++;
	}	 
	free(buf);
    i = 0;
    j = 0;
    k = -1; //change
    n = 0;
	num = 0;
    g_cur_i = g_n_str + 1;
    g_cur_j = g_n_col + 1;
    char final_arr[g_cur_i + 1][g_cur_j + 1 + 1];
    while (i <= g_cur_i)
    {
        j = 0;
        n = 0;
        while (j <= g_cur_j)
        {
            if (i == 0 || j == 0 || i == g_cur_i || j == g_cur_j)
            {
                final_arr[i][j] = 'a';
                j++;
            }
            else
            {
                final_arr[i][j] = arr[k][n];			//Other arr
                if (final_arr[i][j] == g_let_char)		//Препятствие
                {
                    g_list = add(g_list, i, j, num);
                    num++;
                }
                n++;
                j++;
            }
        }
        final_arr[i][j] = '\0';
        k++;
        i++;
    }
    g_list = add(g_list, g_cur_i, g_cur_j, 0);			//Добавление крайней левого препятствия
	create_list_diagonnal();
    t_list *list_max;									//Создание нового листа для максимального значения
    list_max = ft_max(g_list_giagonal);
	infill_final_arr((char *)final_arr, list_max);
	print_arr((char* )final_arr);
}
void	print_error(int num_err, char *argv)
{
	if (num_err == 1)
	{
		ft_putstr("File ");
		ft_putstr(argv);
		ft_putstr(" not found.\n");
	}else	if(num_err == 2)
	{
		ft_putstr("File ");
		ft_putstr(argv);
		ft_putstr(" error.\n");
	}

}
int	main(int argc, char **argv)
{
	char	*buf;
	int		i;

	i = 1;
	if (argc == 1)
	{
		ft_putstr("Too many arguments.\n");
			return (1);
	}
	while (i < argc)
	{
		buf = NULL;
		buf = open_file(argv[i]);			//Open file
		if (buf == NULL)
		{
			print_error(1, argv[i]);
			i++;
			continue;
		}
		if (!check_error_file(buf))			//Check current file
		{
			print_error(2, argv[i]);
			i++;
			continue;
		}
		create_simbol(buf);
		create_min_arr(buf);
		i++;
	}
	return (0);
}

