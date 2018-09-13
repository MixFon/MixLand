//
//  main.c
//  ex01
//
//  Created by Wispmother Draugr scourge on 25/08/2018.
//  Copyright © 2018 Wispmother Draugr scourge. All rights reserved.
//

#include <stdio.h>

int ft_iterative_factorial(int nb);

int main(int argc, const char * argv[]) {
    
    printf("%d %s", ft_iterative_factorial(4), "\n");
    
    return 0;
    
}

int ft_iterative_factorial(int nb)
{
    int i;
    int a;
    
    i = 1;
    a = 1;
    if (nb == 1)
        return 1;
    else    if (nb <= 0)
        return 0;
    else
        while (i <= nb)
        {
            a = a * i;
            i++;
        }
        return a;
}
