#include <stdio.h>

int ft_isalpha(char c);

int main (void)
{
        if (ft_isalpha('a'))
                printf("É do alfabeto! ");
        else
                printf("Não é do alfabeto! ");
        return (0);
}

int ft_isalpha(char c)
{
        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
                return (1);
        return (0);
}
