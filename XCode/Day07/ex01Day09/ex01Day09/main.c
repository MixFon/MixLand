//
//  main.c
//  ex01Day09
//
//  Created by Wispmother Draugr scourge on 30/08/2018.
//  Copyright © 2018 Wispmother Draugr scourge. All rights reserved.
//

#include <stdio.h>

void ft_takes_place(int hour);

void    func(int hour2);

int main(int argc, const char * argv[]) {
    
    ft_takes_place(15);
    //printf("Hello, World!\n");
    return 0;
}

void    func(int hour2)
{
if (hour2 == 0)
{
printf("%d.00 A.M. AMD %d.00 A.M.\n", 12, 1);
}
else    if (hour2 == 23)
{
printf("%d.00 P.M. AMD %d.00 A.M.\n", 11, hour2 - 11);
}
else    if (hour2 == 24)
{
        printf("%d.00 A.M. AMD %d.00 A.M.\n", 12, 1);
}
else
printf("%d\n", 0);
}

void    ft_takes_place(int hour)
{
printf("THE FOLLOWING TAKES PLACE BETWEEN ");
if ( hour > -1 && hour < 12 && hour != 0 && hour != 11)
{
printf("%d.00 A.M. AMD %d.00 A.M.\n", hour, hour + 1);
}
else    if (hour > 12 && hour < 24)
{
printf("%d.00 P.M. AMD %d.00 P.M.\n", hour - 12, hour - 11);
}
else    if (hour == 11)
{
printf("%d.00 A.M. AMD %d.00 P.M.\n", 11, hour + 1);
}
else    if (hour == 12)
{
printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 P.M. AMD %d.00 P.M.\n", 12, hour - 11);
}
else
func(hour);
}
