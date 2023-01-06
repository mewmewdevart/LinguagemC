#include <stdio.h>

char *ft_strcat(char *dest, char *orig);
int ft_strlen(char *str);

int main (void)
{
        char orig[100] = "larissa";
        char dest[100] = "benedito";


        printf("%s", ft_strcat(dest, orig));
        return (0);
}

char *ft_strcat(char *dest, char *orig)
{
        int i;
        int len;

        i = 0;
        len = ft_strlen(dest);
        while(orig[i] != '\0')
        {
                dest[len] = orig[i];
                len++;
                i++;
        }

        dest[len] = '\0';
        return (dest);
}

int ft_strlen(char *str)
{
        char *ptr = str;

        while(*str != '\0')
                str++;
        return ((int)(str-ptr));
}
