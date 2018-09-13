//
//  main.c
//  ex02day07
//
//  Created by Wispmother Draugr scourge on 30/08/2018.
//  Copyright © 2018 Wispmother Draugr scourge. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int    ft_ultimate_range(int **range, int min, int max);

int main(int argc, const char * argv[])
{
    int    *str;
    int     i;
    
    i = 0;
    str = (int*)1;
    printf("%d",ft_ultimate_range(&str, 10, 5));
    while (i < 5)
    {
        printf("%d", str[i]);
        i++;
    }
    printf("Hello, World! %d\n", str == NULL);
    return 0;
    }

    int    ft_ultimate_range(int **range, int min, int max)
{
int i = 0;
        
*range = (int *)malloc(sizeof(**range) * (max - min + 1));
if(min >= max)
{
*range = NULL;
return (0);
}
while(i < (max - min))
{
range[0][i] = min + i;
i ++;
}
return(i);
}
