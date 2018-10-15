
#include "bsq.h"

char	*open_file(char *argv)
{
    int		op;
    int		rea;
    char	*buf;
    int     h;		//счетчик акгументов
    h = 1;
	buf = (char *)malloc(sizeof(char) * (ARR_SIZE + 1));
	if ((op = open(argv, O_RDONLY)) == -1)  //поставил h  вместо 1
	{
		free(buf);
		buf = NULL;
		return(buf);
	}
    rea = read(op, buf, ARR_SIZE);
    buf[rea] = '\0';
    if (close(op) == -1)
    {
        ft_putstr("close error\n");
		free(buf);
		buf = NULL;
		return(buf);
	}
	return (buf);
}

int check_error_file(char *check_buf)
{
    if (ft_chack_file(check_buf))	//Проверка строк
    {
        ft_putstr("Error strings file.\n");
        return (0);
    }
    if (ft_num_str(check_buf))		//Проверка символов в строке
    {
        ft_putstr("Bad simbols map.\n");
        return (0);
    }
	return (1);
}

void	print_mat(char **arr_print)
{
	int i; 
	i = 0;
	while (*arr_print)
	{
		ft_putstr(arr_print[i]);
		ft_putchar('\n');
		i++;
		arr_print++;
	}
}

void	create_simbol(char *buf)
{
    g_emp_char = buf[col_first_str(buf) - 3];		//Изменяю buf[1]
    g_let_char = buf[col_first_str(buf) - 2];
    g_full_char = buf[col_first_str(buf) - 1];
    g_n_col = size_str_map(buf);					//Подсчет столбцов
	g_n_str = real_str(buf);						//Количество строк исправить!! Исправил
	g_list = NULL;
    g_list = add(g_list, 0, 0, 0);
}
