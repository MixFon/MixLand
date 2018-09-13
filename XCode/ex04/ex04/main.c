//
//  main.c
//  ex04
//
//  Created by Wispmother Draugr scourge on 25/08/2018.
//  Copyright © 2018 Wispmother Draugr scourge. All rights reserved.
//

#include <stdio.h>

int ft_fibonacci(int index);

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("%d", ft_fibonacci(6));
    return 0;
}

int ft_fibonacci(int index)
{
    if (index < 0)
        return (-1);
    if (index == 0)
        return (0);
    if (index == 1)
        return (1);
    return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
