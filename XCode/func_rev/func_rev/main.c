#include <unistd.h>

void    ft_putchar(char str)
{
    write (1, &str, 1);
}

void    func_rev(char *str)
{
    int    num;
    
    num = 0;
    while(str[num] != '\0')
        num++;
    while (num >= 0)
    {
        ft_putchar(str[num]);
        num--;
    }
}

int        main(int argc, char **argv)
{
    int    i;
    
    i = 0;
    while (argv[i])
        i++;
    
   while (i >= 0)
    {
        func_rev("argv");
        i--;
        ft_putchar('\n');
    }
    return (0);
}

