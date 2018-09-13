//
//  main.c
//  ex17day09
//
//  Created by Wispmother Draugr scourge on 31/08/2018.
//  Copyright © 2018 Wispmother Draugr scourge. All rights reserved.
//

#include <stdio.h>

int ft_max(int *tab, int length);

int main(int argc, const char * argv[]) {
    
    int arrInt[10] = {1,2,15,4,5,6,7,2};
    
    printf("Hello, World! %d\n", ft_max(arrInt, 6));
    return 0;
}

int ft_max(int *tab, int length)
{
int i;
int max;
    
i = 0;
max = tab[0];
while (i < length)
{
if (tab[i] > max)
{
max = tab[i];
}
i++;
}
return (max);
}
