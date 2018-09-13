//
//  main.c
//  ex03day07
//
//  Created by Wispmother Draugr scourge on 31/08/2018.
//  Copyright © 2018 Wispmother Draugr scourge. All rights reserved.
//

#include <stdlib.h>
#include <unistd.h>

char    *ft_concat_params(int argc, char **argv);

int     ft_strLength(char *str)
{
int i;
    
i = 0;
while (str[i])
i++;
return (i);
}

void    ft_putchar(char c)
{
write(1, &c, 1);
}


char    *ft_strcat(char *dest, char *src)
{
int    i;
int    size;
    
i = 0;
size = 0;
size = ft_strLength(&dest[size]);
while (src[i])
{
dest[size] = src[i];
size++;
i++;
}
dest[size] = '\n';
return (dest);
}

int        main(int argc, char **argv)
{
int i;
i = 0;
char* arr[5] = {"NO", "YES", "ARG2", "ARG3", NULL};
while (ft_concat_params(4, arr)[i] != '\0')
{
ft_putchar(ft_concat_params(4, arr)[i]);
i++;
}
return (0);
}


char    *ft_concat_params(int argc, char **argv)
{
int     i;
int     j;
char    *str = (char*)malloc(sizeof(str));
char    *strCop;
    
i = 1;
while (i < argc)
{
str = ft_strcat(str, argv[i]);
i++;
}
j = ft_strLength(str);
str[j + 1] = '\0';
strCop = (char*)malloc(sizeof(str) * (j + 1));
strCop = str;
return (strCop);
}
