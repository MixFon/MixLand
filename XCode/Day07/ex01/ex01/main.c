//
//  main.c
//  ex00day07
//
//  Created by Wispmother Draugr scourge on 30/08/2018.
//  Copyright © 2018 Wispmother Draugr scourge. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>


int *ft_range(int min, int max);

int main(void)
{
int i;
i = 0;
while (i < 1)
{
printf("%d", ft_range(10, 5)[i]);
i++;
}
}

int *ft_range(int min, int max)
{
int i;
int *arr;
int num;
    
i = 0;
num = min;
if (min >= max)
{
arr = (int*)malloc(1);
return arr;
}

else
{
arr = (int*)malloc(sizeof(*arr) * (max - min));
while (num < max)
{
arr[i] = num;
num++;
i++;
}
}
return (arr);
}
