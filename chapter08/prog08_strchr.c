#include <stdio.h>

char *ft_strchr(char *str, char ch);

int main (void)
{
        char str[100] = "larissa";
        char ch = 'i';

        printf("%s", ft_strchr(str, ch));
        return (0);
}

char *ft_strchr(char *str, char ch)
{
        while(*str != '\0')
        {
                if (*str == ch)
                        return (str);
                else
                        str++;
        }
        return (NULL);
}
