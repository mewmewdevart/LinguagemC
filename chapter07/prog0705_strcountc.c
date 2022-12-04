#include <stdio.h>

int ft_strcountc(char *str, char ch);

int main (void)
{
        char str[] = "larissa";
        char ch = 'a';

        printf("%d", ft_strcountc(str, ch));
        return (0);
}

int ft_strcountc(char *str, char ch)
{
        int i, count;

        i = 0;
        count = 0;
        while(str[i] != '\0')
        {
                if (str[i] == ch)
                        count++;
                i++;
        }
        return (count);
}
