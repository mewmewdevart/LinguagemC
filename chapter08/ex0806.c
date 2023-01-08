#include <stdio.h>

char *ft_strins(char *dest, char *orig);
int ft_strlen(char *str);

int main (void)
{
        char str[100] = "Autonoma";
        char sub[100] = "Universidade";

        printf("%s", ft_strins(str, sub));
        return (0);
}

char *ft_strins(char *dest, char *orig)
{
        int i;
        int len_orig;

        i = 0;
        len_orig = ft_strlen(orig);
        while(dest[i] != '\0')
        {
                orig[len_orig] = dest[i];
                i++;
                len_orig++;
        }

        orig[len_orig] = '\0';
        return (orig);
}

int ft_strlen(char *str)
{
        char *ptr = str;

        while(*str != '\0')
                str++;
        return ((int)(str-ptr));
}
