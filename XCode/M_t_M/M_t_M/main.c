//
//  main.c
//  M_t_M
//
//  Created by Wispmother Draugr scourge on 01/09/2018.
//  Copyright © 2018 Wispmother Draugr scourge. All rights reserved.
//

#include <stdio.h>

int ft_match(char *str, char *str2);

int find_char(int n_str1, int n_str2, char c, char *str);

int i_func;

int j_func;

int main(int argc, const char * argv[]) {
    
  //  char    *str;
    
    printf("%d\n", ft_match("fdsaaaaaaafdsa", "*a"));   //тест 43
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
    i_func = 0;
    j_func = 0;
    printf("srt1 равно %c\n",str1[i]);
    printf("srt2 равно %c\n",str2[j]);
    if ((str1[i] == '\0' && str2[j] =='\0')||((str2[0] =='*' && !str2[1])))
        return (1);
    while (str1[i] || str2[j])
    {
        printf("srt1 равно %c\n",str1[i]);
        printf("srt2 равно %c\n",str2[j]);
        if (str2[j] == '*')
        {
            if (str2[j + 1] == '\0')
                return (1);
            neg = find_char(i, j, str2[j + 1], str1);
            i = i_func - 1;
            printf("i равно %d\n",i);
           // printf("j равно %d\n",j);
        }
        else   if (str1[i] == str2[j])
            neg = 1;
        else
            return (0);
        if (((str1[i] == '\0' && str2[j] !='\0') || (str1[i] != '\0' && str2[j] =='\0')))
            return (0);
        i++;
        j++;
        printf("i b равно %d\n",i);
        printf("j b равно %d\n",j);
    }
    if (neg == 1)
        return 1;
    else
        return 0;
}

int find_char(int n_str1, int n_str2, char c, char *str)
{
    //int x;
    //int y;
    
    while(str[n_str1] != '\0')
    {
        if (str[n_str1] == c)
        {
            i_func = n_str1;
            return (1);
        }
        printf("%s\n","Ho");
        n_str1++;
    }
    printf("%s\n","Hu");
    return (0);
}
