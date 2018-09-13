
//
//  main.c
//  ex03
//
//  Created by Михаил Фокин on 28.08.2018.
//  Copyright © 2018 Михаил Фокин. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>
#include <string.h>

char    *ft_strupcase(char *str);

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}

int main(int argc, const char * argv[]) {
    
    char str1[100]="asdf qWeRtY ZXCV";
    //char str2[100]="asdf";
   //printf()
    //ft_putstr(ft_strncpy(str1, str2, 10));
    printf("%s", ft_strupcase(str1));
    ft_putchar('\n');
    return 0;
}

char    *ft_strupcase(char *str)
{
int    i;
    
i = 0;
while (str[i])
{
if ((str[i] >= 'a') && (str[i] <= 'z'))
str[i] = str[i] - 32;
i++;
}
return (str);
}

int    ft_strlen(char *str)
{
int    i;
    
i = 0;
while (str[i] != '\0')
i++;
return (i);
}


int    ft_atoi(char *str)
{
int    i;
int    n;
int    res;
    
i = 0;
n = 1;
res = 0;
while ((str[i] <= 13 && str[i] >= 9) || str[i] == 32)
i++;
if (str[i] == '+' || str[i] == '-')
{
if (str[i] == '-')
n = -1;
i++;
}
while (str[i] >= 48 && str[i] <= 57)
{
res = res * 10 + (str[i] - '0');
i++;
}
return (res * n);
}

