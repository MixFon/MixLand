/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: widraugr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 13:25:15 by widraugr          #+#    #+#             */
/*   Updated: 2018/08/30 13:28:10 by widraugr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

char *ft_strdup(char *src);

int main() {

	char    *str1 = "sdfg";
	char    *str4 = "sdfg";
	char    *str2;
	char    *str3;
	    
	str2 = ft_strdup(str1);
	printf("%s\n", str2);
	free(str2);
	    
	str3 = strdup(str4);
	printf("%s\n", str3);
	free(str3);
	return 0;
}
