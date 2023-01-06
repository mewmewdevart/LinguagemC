#include <stdio.h>

char *ft_strcpy(char *dest, char *orig);

int main (void)
{
        char orig[100] = "queijo";
        char dest[100] = "";

        printf("%s", ft_strcpy(dest, orig));
        return (0);
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
