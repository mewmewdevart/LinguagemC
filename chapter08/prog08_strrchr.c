#include <stdio.h>

char *ft_strrchr(char *str, char ch);

int main (void)
{
        char str[100] = "larissa";
        char ch = 's';

        printf("%s", ft_strrchr(str, ch));
        return (0);
}

char *ft_strrchr(char *str, char ch)
{
        int i;
        int j;

        i = 0;
        j = 0;
        while(str[i] != '\0')
                i++;
        while(j < i)
        {
                if(str[i] == ch)
                        return (&str[i]);
                i--;
        }
        return (NULL);
}
