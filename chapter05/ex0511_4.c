#include <stdio.h>

int ft_islower(char c);

int main (void)
{
        if (ft_islower('A'))
                printf("É minusculo! ");
        else
                printf("É maiusculo! ");
        return (0);
}

int ft_islower(char c)
{
        if (c >= 'a' && c <= 'z')
                return (1);
        else if (c >= 'A' && c <= 'Z')
                return (0);
}
