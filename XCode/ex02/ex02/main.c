//
//  main.c
//  ex02
//
//  Created by Wispmother Draugr scourge on 25/08/2018.
//  Copyright © 2018 Wispmother Draugr scourge. All rights reserved.
//

#include <stdio.h>

int ft_iterative_power(int nb, int power);

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("%d", ft_iterative_power(2, -6));
    return 0;
}

int ft_iterative_power(int nb, int power)
{
    int a;
    
    a = 1;
    if (power < 0)
        return (0);
    else    if (power == 0)
        return (1);
    else
        while(power > 0)
    {
        a *= nb ;
        power--;
    }
    return a;
}
