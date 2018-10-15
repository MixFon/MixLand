/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 12:58:16 by widraugr          #+#    #+#             */
/*   Updated: 2018/09/11 16:49:15 by widraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>


#define ARR_SIZE 4000000

typedef struct            s_list
{
    struct s_list        *next;
    int					cor_i;
    int					cor_j;
	int					num;
}						t_list;

t_list  *add(t_list *list, int cor_i, int icor_j, int num);
t_list  *ft_max(t_list *begin_list);
void	create_list_diagonnal();
void	print_arr(char *final_arr);
void	infill_final_arr(char *final_arr, t_list *g_list_max);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void    print_list(t_list *list);
int     ft_list_size(t_list *begin_list);
int		ft_find(t_list *list, int cor_i, int cor_j);
int		ft_find_sq(t_list *list, int cor_i, int cor_j, int beg_i, int beg_j);
int     ft_chack_file(char *str_chack);
int     ft_num_str(char *str_chack);
int     size_str_map(char *str);
int     col_first_str(char *str);
int     ft_atoi(char *str);
int     real_str(char *str);
char	*open_file(char *argv);
void	print_mat(char **arr_print);
int		check_error_file(char *check_buf);	
void	create_simbol(char *buf);
int		ft_atoi(char *str);
void	ft_putstr(char *str);
int size_str_map(char *str);
int ft_chack_file(char *str_chack);
void	ft_putchar(char c);

int		ft_find(t_list *list, int cor_i, int cor_j);
t_list	*add(t_list *list, int cor_i, int cor_j, int num);
int		ft_find_sq(t_list *list, int cor_i, int cor_j, int beg_i, int beg_j);
int		ft_list_size(t_list *begin_list);
t_list   *ft_max(t_list *begin_list);

int     col_first_str(char *str);
int ft_num_str(char *str_chack);
void	print_list(t_list *list);
int real_str(char *str);
char    g_emp_char;
char    g_let_char;
char    g_full_char;
int     g_n_str;								//Колличество строк
int     g_n_col;								//Количество столбцов
int		g_cur_i;
int		g_cur_j;
t_list	*g_list;
t_list	*g_list_giagonal;

#endif
