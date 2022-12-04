#include <stdio.h>

int ft_strcountd(char *str);
int ft_isdigit(char ch);

int main (void)
{
        char str[] = "12 larissa 2";

        printf("%d", ft_strcountd(str));
        return (0);
}

int ft_strcountd(char *str)
{
        int i;
        int count;

        i = 0;
        count = 0;
        while(str[i] != '\0')
        {
                if (ft_isdigit(str[i]))
                        count++;
                i++;
        }
        return (count);
}

int ft_isdigit(char ch)
{
        if (ch >= '0' && ch <= '9')
                return (1);
        return (0);
}
