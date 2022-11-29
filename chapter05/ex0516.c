#include <stdio.h>

int ft_isVogal(char ch);

int main (void)
{
        if (ft_isVogal('A'))
                printf("É uma vogal! ");
        else
                printf("Não é uma vogal! ");
        return (0);
}

int ft_isVogal(char ch)
{
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'
                        || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
                return (1);
        return (0);
}
