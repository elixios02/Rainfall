#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int m;

void    p(char *str)
{
    printf(str);
    return;
}

void    n()
{
    char    schar[520];
    fgets(schar,512,stdin);
    p(schar);
    if (m == 16930116)
    {
        system("/bin/cat /home/user/level5/.pass");
    }
    return ;
}

int     main(int ac, char **av)
{
    n();
    return (0);
}