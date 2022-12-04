#include <stdio.h>

int ft_strlen(char *str);

int main (void)
{
        printf("%d", ft_strlen("larissa"));

        return (0);
}

int ft_strlen(char *str)
{
        int i;
        i = 0;

        while(str[i] != '\0')
        {
                i++;
        }
        return (i);
}
