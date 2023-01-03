#include <stdio.h>

char *ft_wordupr(char *str);

int main (void)
{
        char str[100] = "larissa cristina beneditO";

        printf("%s", ft_wordupr(str));
}

char *ft_wordupr(char *str)
{
        int i;

        i = 0;
        while(str[i] != '\0')
        {
                if(str[i] >= 'A' && str[i] <= 'Z')
                        str[i] = str[i] + 32;
                if (str[0] >= 'a' && str[0] <= 'z')
                        str[i] = str[i] - 32;
                if (str[i] == ' ')
                {
                        i++;
                        str[i] = str[i] - 32;
                }
                i++;
        }
        str[i] = '\0';
        return (str);
}
