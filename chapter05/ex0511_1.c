#include <stdio.h>

int ft_isdigit(char c);

int main (void)
{

        if (ft_isdigit('a'))
                printf("É um digito! ");
        else
                printf("Não é um digito! ");
        return (0);
}

int ft_isdigit(char c)
{
        if (c >= '0' && c <='9')
                return(1);
        return (0);
}
