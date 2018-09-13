//
//  main.c
//  M_t_M
//
//  Created by Wispmother Draugr scourge on 01/09/2018.
//  Copyright © 2018 Wispmother Draugr scourge. All rights reserved.
//
#include <stdio.h>
int i_func;

int j_func;

int ft_match(char *str, char *str2);

int find_char(int n_str1, char c, char *str);

int count_str(char *str)
{
int i;
    
i = 0;
while (str[i] != '\0')
i++;
return (i - 1);
}

int main()
{
    printf("%d\n", ft_match("abc", "a*c"));   //тест 43
return 0;
}

int ft_match(char *str1, char *str2)
{
int     i;
int     j;
int     neg;
    
i = 0;
j = 0;
neg = 0;
if ((str1[i] == '\0' && str2[j] =='\0')||((str2[0] =='*' && !str2[1])))
return (1);
while (str1[i] || str2[j])
{
if (str2[j] == '*')
{
if (str2[j + 1] == '\0')
return (1);
neg = find_char(i, str2[j + 1], str1);
i = i_func - 1;
}
else   if (str1[i] == str2[j])
neg = 1;
else
return (0);
if (((str1[i] == '\0' && str2[j] !='\0') || (str1[i] != '\0' && str2[j] =='\0')))
return (0);
i++;
j++;
}
if (neg == 1)
return 1;
else
return 0;
}

int find_char(int n_str1, char c, char *str)
{
while(str[n_str1] != '\0')
{
if (str[count_str(str)] == c)
{
i_func = count_str(str);
return (1);
} else  if (str[n_str1] == c)
{
i_func = n_str1;
return (1);
}
n_str1++;
}
return (0);
}

