/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 13:16:00 by widraugr          #+#    #+#             */
/*   Updated: 2018/09/10 17:03:30 by widraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stdlib.h> 
# include <stdio.h>

typedef struct			s_list
{
	struct s_list		*next;
	int					cor_i;
	int					cor_j;
}						t_list;

t_list					*ft_create_elem(void *data);
t_list					*add(t_list *list, int cor_i, int icor_j);
void					print_list(t_list *list);

#endif
