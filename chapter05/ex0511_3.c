#include <stdio.h>

int ft_isalnum(char c);

int main (void)
{
        if (ft_isalnum('5'))
                printf("É um alfanumerico! ");
        else
                printf("Não é um alfanumerico! ");
        return (0);
}

int ft_isalnum(char c)
{
        if (c >= 'A' && c <='Z' || c >= 'a' && c <= 'z' || c >= '0' && c <= '9')
                return (1);
        return (0);
}
