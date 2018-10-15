#include "bsq.h"

t_list	*add(t_list *list, int cor_i, int cor_j, int num)
{
	t_list *listnew;

	listnew = malloc(sizeof(t_list));
	if (listnew)
	{
		listnew->cor_i = cor_i;
		listnew->cor_j = cor_j;
		listnew->num = num;
		listnew->next = list;
	}
	return (listnew);
}

int		ft_find(t_list *list, int cor_i, int cor_j)
{
	int		num;
	int		negi;
	int		negj;
	t_list	*listnew;

	listnew = list;
	negi = 0;
	negj = 0;
	while (listnew != NULL)
	{
		if (cor_i == listnew->cor_i)
			negi = 1;
		if (cor_j == listnew->cor_j)
			negj = 1;
		listnew = listnew->next;
	}
	return (negi * negj);
}

void	create_list_diagonnal()
{
	int	p;
	int x;
	int y;
    int r;
    int l;
    p = 0;
    r = 0;
	x = 0;
	y = 0;
    g_list_giagonal = NULL;
    while (x < g_n_str)       //Было 9
    {
        y = 0;
        while (y < g_n_col)   //Было 27
        {
            p = x + 1;
            r = y + 1;
            l = 0;
            while (ft_find_sq(g_list, p, r, x, y) != 1 && p < g_cur_i && r < g_cur_j)  //Поставить границы cor_i = 10
            {
                p++;
                r++;
                l++;
            }
            g_list_giagonal = add(g_list_giagonal, x, y, l);
            y++;
        }
        x++;
    }

}

void	infill_final_arr(char *final_arr, t_list *list_max)
{
	int x;
	int y;

	x = 0;
	while (x <= g_cur_i)
    {
        y = 0;
        while (y <= g_cur_j + 1)
        {
            if ((y > list_max->cor_j) && y <= (list_max->cor_j + list_max->num) && (x > list_max->cor_i) && x <= (list_max->cor_i + list_max->num))
            {
                *final_arr = g_full_char;
            }
            y++;
			final_arr++;
        }
        x++;
    }

}


void	print_arr(char *final_arr)
{
	int x;
	int y;

	x = 0;
    while (x <= g_cur_i)
    {
		y = 0;
		while (y <= g_cur_j + 1)
        {
			if (*final_arr != 'a')
				ft_putchar(*final_arr);
			final_arr++;	
			y++;
        }
		ft_putchar('\n');
        x++;
    }
}
