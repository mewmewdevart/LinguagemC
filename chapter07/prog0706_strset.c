#include <stdio.h>

char *ft_strset(char *str, char ch);

int main(void)
{
        char str[50] = "larissa";
        char ch = 'a';

        printf("%s", ft_strset(str, ch));
        return (0);
}

char *ft_strset(char *str, char ch)
{
        int i;

        i = 0;
        while(str[i] != '\0')
        {
                str[i] = ch;
                i++;
        }
        return (str);
}
