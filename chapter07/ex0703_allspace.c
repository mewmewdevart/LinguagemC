#include <stdio.h>

char *ft_allspaces(char *str);

int main(void)
{
        char string[100] = "larissa";

        printf("%s", ft_allspaces(string));
        return (0);
}

char *ft_allspaces(char *str)
{
        int i;
        char ch;

        i = 0;
        ch = ' ';
        while(str[i] != '\0')
        {
                str[i] = ch;
                i++;
        }
        return (str);
}
