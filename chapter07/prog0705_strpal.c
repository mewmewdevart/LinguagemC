#include <stdio.h>

int ft_strlen(char *str);
int ft_strpal(char *str);

int main (void)
{
        printf("%d", ft_strpal("matam")); //string palindroma
        return (0);
}

int ft_strpal(char *str)
{
        int i;
        int j;

        i = 0;
        j = ft_strlen(str) - 1;
        while (i < j)
        {
                if (str[i] != str[j]) //se os caracteres forem diferenteis
                        return (0);
                i++;
                j--;
        }
        return (1);
}

int ft_strlen(char *str)
{
        int i;

        i = 0;
        while(str[i])
                i++;
        return (i);
}
