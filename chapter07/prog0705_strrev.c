#include <stdio.h>

char *ft_strrev(char *str);
int ft_strlen(char *str);

int main (void)
{
        char str[] = "larissa";

        printf("%s", ft_strrev(str));
        return (0);
}

char *ft_strrev(char *str)
{
        int i;
        int len;
        char swap;

        i = 0;
        len = ft_strlen(str) - 1;
        while (i < len)
        {
                swap = str[i]; // envia a ultima letra do len para o i invertendo a ordem
                str[i] = str[len];
                str[len] = swap;

                i++;
                len--;
        }
        return (str);
}

int ft_strlen(char *str)
{
        int i;

        i = 0;
        while (str[i])
                i++;
        return (i);
}
