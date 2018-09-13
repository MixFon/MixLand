//
//  main.c
//  ex04Day07
//
//  Created by Wispmother Draugr scourge on 31/08/2018.
//  Copyright © 2018 Wispmother Draugr scourge. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

char **ft_split_whitespaces(char *str);

int     numb_words(char *strnum);

int main(int argc, const char * argv[])
{
    
    int i;
    int j;
    char **str1;
    
    i = 0;
    j = 0;
    str1 = ft_split_whitespaces("123czc 456zcx 789 zxc");
    
    char** res;
    for (res = ft_split_whitespaces("asdf qwerty zxcv"); *res != '\0'; res++)
        printf("'%s',", *res);
    
//    while (i < numb_words(*str1))
    {
//        while (str1[i][j] != '\0')
//        {
//            printf("%s", str1[i]);
//            j++;
//        }
 //       i++;
    }

//    printf("%s", str1);
//    printf("%d", numb_words("123czc 456zcx 789 zxc"));
    return 0;
}

int     numb_words(char *strnum)
{
    int     i;
    int     j;
    
    i = 0;
    j = 0;
    while (strnum[i] != '\0')
    {
        if (strnum[i] != ' ' && strnum[i] != '\n' && strnum[i] != '\t')
        {
            if (strnum[i + 1] == ' ' || strnum[i + 1] == '\n' || strnum[i + 1] == '\t' || strnum[i + 1] == '\0')
            {
                j++;
            }
            i++;
        }else
            i++;
    }
    return j ;
}

char **ft_split_whitespaces(char *str)
{
    int     i;
    int     j;
    int     k;
    char    **str_cop;
    
    i = 0;
    j = 0;
    k = 0;
    str_cop = (char**)malloc(sizeof(char*) * (numb_words(str) + 1));
    while (str[i] != '\0')
    {
        str_cop[j] = (char*)malloc(sizeof(char) * (256));
        if (str[i] != ' ')
        {
            str_cop[j][k] = str[i];
           // printf("%c", str[i]);
            k++;
            i++;
            if (str[i + 1] == ' ' || str[i + 1] == '\n' || str[i + 1] == '\t')
            {
                               j++;
                
                k = 0;
            }
        }else
            i++;
    }
    
    str_cop[numb_words(str)] = NULL;
    return (str_cop);
}

