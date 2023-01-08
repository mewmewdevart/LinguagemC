#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int main (void)
{
        char str[100] = "cristina";
        char to_find[100] = "ina";

        printf("A substring é : %s", ft_strstr(str, to_find));
        return (0);
}

char *ft_strstr(char *str, char *to_find)
{
        int i;
        int j;

        i = 0;
        if(to_find[0] == '\0')
                return ((char *)str);
        while(str[i] != '\0')
        {
                j = 0;
                while(str[i + j] == to_find[j] && str[i + j] != '\0')
                {
                        if(to_find[j + 1] == '\0')
                                return ((char *)&str[j]);
                        j++;
                }
                i++;
        }
        return (NULL);
}
