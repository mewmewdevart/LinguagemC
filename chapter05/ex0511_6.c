#include <stdio.h>

int ft_isspace(char c);

int main (void)
{
        if (ft_isspace(' '))
                printf("É espaço! ");
        else
                printf("Nao é espaço! ");
        return (0);
}

int ft_isspace(char c)
{
        if (c == 32)
                return (1);
        return (0);
}
