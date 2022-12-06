#include <stdio.h>

char *ft_mygets(char *str);

int main (void)
{
        char str[20] = " "; //transforma isso

        printf("%s", ft_mygets(str));
        return (0);
}

char *ft_mygets(char *str)
{
        int i;
        int ch;

        i = 0;
        while((ch=getchar())!= '\n') // no caractere inserido aqui
                str[i++] = ch;

        str[i] = '\0';
        return (str);
}
