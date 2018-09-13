//
//  main.c
//  Rash
//
//  Created by Wispmother Draugr scourge on 25/08/2018.
//  Copyright © 2018 Wispmother Draugr scourge. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>

void rash(int width ,int height);

void ft_putchar(char c);

int main(void)
{
    rash(4, 4);
    return (0);
}

void ft_putchar(char c)
{
    write (1, &c, 1);
}

void rash(int width ,int height)
{
    int i;
    int j;
    
    i = 1;
    while (i <= height)
    {
        j = 1;
        while (j <= width)
        {
            if ((i == 1 && j == 1) || (i == height && j == 1))
                ft_putchar('o');
            else    if ((i == 1 && j == width) || (i == height && j == width))
                    ft_putchar('o');
            else    if ((i == 1 || i == height) && (j != 1 || j != width))
                    ft_putchar('-');
            else    if ((j == 1 || j == width) && (i > 1 && i < height))
                    ft_putchar('|');
            else
                ft_putchar(' ');
            j++;
        }
        ft_putchar('\n');
        i++;
    }
}

//((j == 1 && i > 1 && i < height) || (j == width && i > 1 && i < height))
