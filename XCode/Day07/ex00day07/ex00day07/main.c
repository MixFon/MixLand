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


char *ft_strdup(char *src);

int main(int argc, const char * argv[]) {

char    *str1 = "";
char    *str4 = "";
char    *str2;
char    *str3;
    
str2 = ft_strdup(str1);
printf("%s\n", str2);
free(str2);
    
str3 = strdup(str4);
printf("%s\n", str3);
free(str3);
return 0;
}

char *ft_strdup(char *src)
{
int     i;
char    *strCop;
    
i = 0;
while (src[i] != '\0')
i++;
strCop = (char*)malloc(sizeof(*src) * (i + 1));
i = 0;
    
while(src[i])
{
strCop[i] = src[i];
i++;
}
return (strCop);
}
