#include <stdio.h>

int ft_isupper(char c);

int main (void)
{
        if (ft_isupper('a'))
                printf("É maiuscula! ");
        else
                printf("É minuscula! ");
        return (0);
}

int ft_isupper(char c)
{
        if (c >= 'A' && c <= 'Z')
                return (1);
        return (0);
}
