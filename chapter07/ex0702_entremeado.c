#include <stdio.h>

char *ft_entremeado(char *str, int n);
int ft_strlen(char *str);

int main (void)
{
        char str[30] = "ABCDEFGHIJKLMN";
        int number = 1;

        printf("%s", ft_entremeado(str, number));
        return (0);
}

char *ft_entremeado(char *str, int n)
{
        int i, j, len;


        len = ft_strlen(str);
        if (n == 0)
                return (str);

        j = i = 0;
        while(str[i] != '\0')
        {
        }
        str[i] = '\0';
        return (str);
}

int ft_strlen(char *str)
{
        int i;

        i = 0;
        while(str[i] != '\0')
                i++;
        return (i);
}
