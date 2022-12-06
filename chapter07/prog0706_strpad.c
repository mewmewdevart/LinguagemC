#include <stdio.h>

char *ft_strpad(char *str);
int ft_strlen(char *str);

int main (void)
{
        char str[20] = "larissa";

        printf("%s", ft_strpad(str));
        return (0);
}

char *ft_strpad(char *str)
{
        int i;

        i = ft_strlen(str);
        while(i >= 0)
        {
                str[2*i] = str[i]; //str[2*7] = str[7]
                str[2*i+1] = ' '; // 14+1 | espaço sim, espaço nao da direita pra esquerda
                i--;
        }
        return (str);
}

int ft_strlen(char *str)
{
        int i;

        i = 0;
        while(str[i])
                i++;
        return (i);
}
