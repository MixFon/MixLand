//
//  main.c
//  ex03
//
//  Created by Wispmother Draugr scourge on 25/08/2018.
//  Copyright © 2018 Wispmother Draugr scourge. All rights reserved.
//

#include <stdio.h>

int ft_recursive_power(int nb, int power);

int main(int argc, const char * argv[]) {
    
    printf("%d",ft_recursive_power(2, 5));
    return 0;
}

int ft_recursive_power(int nb, int power)
{
    if (power < 0)
        return (0);
    else    if (power == 0)
        return (1);
    else
        return (nb * ft_recursive_power(nb, power - 1));
}
