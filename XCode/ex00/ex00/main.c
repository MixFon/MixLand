//
//  main.c
//  ex00
//
//  Created by Wispmother Draugr scourge on 25/08/2018.
//  Copyright © 2018 Wispmother Draugr scourge. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>

int ft_iterative_factorial(int nb);

int main() {

    printf("%d %s", ft_iterative_factorial(12), "\n");
    
    return 0;
}


int ft_iterative_factorial(int nb)
{
    if (nb == 1){
        return 1;
    } else
        if (nb <= 0)
    return 0;
    else
        return nb * ft_iterative_factorial(nb - 1);
    
}
