#include <stdio.h>

//converte os caracteres da string em maiusculo
char ft_upper(char ch);
char *ft_strupr(char *str);

int main (void)
{
        char str[50] = "larissa";

        printf("%s", ft_strupr(str));
        return (0);
}

char *ft_strupr(char *str)
{
        int i;

        i = 0;
        while(str[i] != '\0')
        {
                str[i] = ft_upper(str[i]);
                i++;
        }

        return (str);
}

char ft_upper(char ch)
{
        if (ch >= 'a' && ch <= 'z')
                return (ch-32);
        return (ch);
}
