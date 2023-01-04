#include <stdio.h>

char *ft_transform(char *str);
int ft_strlen(char *str);

int main (void)
{
        char str[100] = "MAFALDAS";

        printf("%s", ft_transform(str));
        return (0);
}

char *ft_transform(char *str)
{
        int i;
        int len;

        i = 0;
        //transforma em minuscula
        while(str[i] != '\0')
        {
                if(str[i] >= 'A' && str[i] <= 'Z')
                        str[i] = str[i] + 32;
                i++;
        }

        i = 0;
        len = ft_strlen(str);
        len = len/2;
        while(str[i] != '\0')
        {
                if(i < len)
                        str[i];
                else if(i <= len*2)
                        str[i] = str[i] - 32;
                i++;
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
