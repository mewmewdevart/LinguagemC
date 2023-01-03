#include <stdio.h>

char *ft_allBigger(char *str);

int main (void)
{
        char str[100] = "all BIG e R";

        printf("%s", ft_allBigger(str));
        return (0);
}

char *ft_allBigger(char *str)
{
        int i;
        int big;

        i = 0;
        while(str[i] != '\0')
        {
                if(str[i] >= 'A' && str[i] <= 'Z')
                        str[big++] = str[i];
                i++;
        }

        str[big] = '\0';
        return (str);
}


