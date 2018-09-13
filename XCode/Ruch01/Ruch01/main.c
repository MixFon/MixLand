//
//  main.c
//  Ruch01
//
//  Created by Wispmother Draugr scourge on 02/09/2018.
//  Copyright © 2018 Wispmother Draugr scourge. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int     func(int **num, int *num2);

int    find_c(int *str, int *str2);

int        *str_to_line(char *s)
{
    int        *line;
    int        *p;
    
    line = (int *)malloc(sizeof(int) * 10);
    p = line;
    if (!line)
        return (NULL);
    while (*s)
    {
        if (*s >= '0' && *s <= '9')
            *line = *s - 48;
        else if (*s == '.')
            *line = 0;
        else
            return (NULL);
        s++;
        line++;
    }
    return (p);
}

int *arrsq(int **arr_i, int i, int j)
{
    int f;
    int q;
    int w;
    int *arr_cop;
    
    q = (i / 3) * 3;
    w = (j / 3) * 3;
    f = 0;
    j = w;
    arr_cop = (int *)malloc(sizeof(int) * 9);
    while (f < 9)
    {
        arr_cop[f] = arr_i[q][w];
        if (w == j + 2)
        {
            w = j;
            q++;
            w--;
        }
        f++;
        w++;
    }
    return (arr_cop);

}

int main(int argc, const char * argv[])
{
    int arr2[10] = {1,2,3,4,5,6,7,8,9};
   //int i = 0;
    //int arr[10][10] =  {{0,7,0,4,5,6,2,8,9},    //3
//                        {0,7,0,4,5,6,2,8,9},  //1,2
//                        {0,7,0,4,5,6,2,8,9},  //2
//                        {0,7,0,4,5,6,2,8,9},
//                        {0,7,0,4,5,6,2,8,9},  //3
//                        {0,7,0,4,5,6,2,8,9},
//                        {0,7,0,4,5,6,2,8,9},
//                        {0,7,0,4,5,6,2,8,9},
//                        {0,7,0,4,5,6,2,8,9}};

    int **arr3 = (int **)malloc(sizeof(int *) * 9);
        arr3[0] = str_to_line("9...7....");
        arr3[1] = str_to_line("2...9..53");
        arr3[2] = str_to_line(".6..124..");
        arr3[3] = str_to_line("84...1.9.");
        arr3[4] = str_to_line("5.....8..");
        arr3[5] = str_to_line(".31..4...");
        arr3[6] = str_to_line("..37..68.");
        arr3[7] = str_to_line(".9..5.741");
        arr3[8] = str_to_line("47.......");
    //    char **arr = (char **)malloc(sizeof(char *) * 10);
    //    while(i < 10)
    //    {
    //        arr[i] = (char *)malloc(sizeof(char) * 11);
    //        i++;
    //    }
//    int i = 0;
//    int *arrrrr;
//    arrrrr = arrsq(arr3, 4, 4);
//    while (i < 9)
//    {
//        printf("%d ",arrrrr[i]);
//        i++;
//        //printf("\n");
//    }
    printf("%d", func(arr3, arr2));
    //printf("%d", find_c(arr3[0], arr2));
    //printf("%d", func(arr3, arr2));
//    arr3[0] = str_to_line("9...7....");
//    arr3[1] = str_to_line("2...9..53");
//    arr3[2] = str_to_line(".6..124..");
//    arr3[3] = str_to_line("84...1.9.");
//    arr3[4] = str_to_line("5.....8..");
//    arr3[5] = str_to_line(".31..4...");
//    arr3[6] = str_to_line("..37..68.");
//    arr3[7] = str_to_line(".9..5.741");
//    arr3[8] = str_to_line("47.......");
    
    return 0;
}

int    find_c(int *str, int *str2)
{
    int i;
    int j;
    
    j = 0;
    i = 0;
    while (i < 9)
        {
            if (str2[j] != str[i])
            {
                i++;
            } else
            {
                j++;
                i = 0;
            }
        }
    return (str2[j]);
}

int     func(int **num, int *num2)
{
    int i;
    int j;
    int k;
    int x;
    int s_col[10];
    int *sqw;
    
    i = 0;
    j = 0;
    x = 0;
    while (x < 10)
    {
        i = 0;
        while (i < 9)
        {
            j = 0;
        while(j < 9)
        {
            k = 0;
            sqw = arrsq(num, i, j);   // testok
            while (k < 9)
            {
                s_col[k] = num[k][j];
                printf("%d |", s_col[k]);
                k++;
            }
            printf("\n%d\n ", find_c (s_col, num2));
            if (num[i][j] > 0 && num[i][j] < 10)
            {
                j++;
                continue;
            }
            if (find_c(num[i], num2) == find_c(s_col, num2) && (find_c(num[i], num2) == find_c(sqw, num2)))
            {
                num[i][j] = find_c(s_col, num2);
            }
            else    if((find_c(s_col, num2) == find_c(sqw, num2)))
            {
                num[i][j] = find_c(sqw, num2);
            }
            else    if((find_c(num[i], num2) == find_c(sqw, num2)))
            {
                num[i][j] = find_c(num[i], num2);
            }
            
        printf("%d", num[i][j]);
       // printf("%c ", find_c(num[i], num2));
            j++;
        }
        i++;
            printf("\n");
    }
         x++;
    }
    i = 0;
    while (i < 9)
    {
        j = 0;
        while(j < 9)
        {
            printf("%d ", num[i][j]);
            j++;
        }
        i++;
        printf("\n");
    }

    return (9);
}
                
                //s_col[k] = num[k][0];
