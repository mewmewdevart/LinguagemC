#include <stdio.h>

int ft_indchr(char *str, char ch);

int main (void)
{
        char str[] = "1111 larissa";
        char ch = 'a';

        printf("%d", ft_indchr(str, ch));
        return (0);
}

int ft_indchr(char *str, char ch)
{
        int i;

        i = 0;
        while(str[i] != '\0')
        {
                if(str[i] == ch)
                        return (i);
                i++;
        }
        return (-1); //retorna -1 porque 0 é um indice possivel
}
