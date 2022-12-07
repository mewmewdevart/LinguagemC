#include <stdio.h>

char *ft_strlwr(char *str);
//transforma a string em minusculas

int main (void)
{
        char str[] = "LARISSA";

        printf("%s", ft_strlwr(str));
        return (0);
}

char *ft_strlwr(char *str)
{
        int i;

        i = 0;
        while(str[i] != '\0')
        {
                if(str[i] >= 'A' && str[i] <= 'Z')
                        str[i] += 32;
                i++;
        }
        return (str);
}
