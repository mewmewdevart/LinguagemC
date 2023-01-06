#include <stdio.h>

char *ft_strcat(char *dest, char *orig);
char *ft_strcpy(char *dest, char *orig);
int ft_strlen(char *str);

int main (void)
{
        char orig[100] = "larissa";
        char dest[100] = "silva";

        printf("%s", ft_strcat(dest, orig));
        return (0);
}

char *ft_strcat(char *dest, char *orig)
{
        ft_strcpy(dest+ft_strlen(dest), orig);
        return (dest);
}

char *ft_strcpy(char *dest, char *orig)
{
        char *tmp = dest;

        while(*dest = *orig)
        {
                dest++;
                orig++;
        }

        return tmp;
}

int ft_strlen(char *str)
{
        char *ptr = str;

        while(*str != '\0')
                str++;

        return ((int)(str-ptr));
}
