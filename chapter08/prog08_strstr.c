#include <stdio.h>

char *ft_strstr(const char *str, const char *to_find);

int main (void)
{
        char str[100] = "larissa";
        char find[100] = "issa";
        char *result;

        result = ft_strstr(str, find);
        printf("A substring é : %s\n", result);
        return (0);
}

char *ft_strstr(const char *str, const char *to_find)
{
        int i;
        int j;

        i = 0;
        if(to_find[0] == '\0')
                return ((char *)str);
        while(str[i] != '\0')
        {
                j = 0;
                while (str[i + j] == to_find[j] && str[i + j] != '\0')
                {
                        if (to_find[j + 1] == '\0')
                                return ((char *)&str[i]);
                        j++;
                }
                i++;
        }
        return (NULL);
}
