#include <stdio.h>

int ft_strlen(char *str);
char *ft_strcat(char *dest, char *orig);

int main (void)
{
        char dest[] = "bolo";
        char orig[] = "manga";

        printf("%s", ft_strcat(dest, orig));
        return (0);
}
char *ft_strcat(char *dest, char *orig)
{
        int i, len;

        i = 0;
        len = ft_strlen(dest);
        while (orig[i] != '\0')
        {
                dest[len] = orig[i]; //Conforme for aumentando 1, vai substituindo o outro
                len++;
                i++;
        }

        dest[len] = '\0';
        return (dest);
}
int ft_strlen(char *str)
{
        int i;

        i = 0;
        while(str[i] != '\0')
        {
                i++;
        }
        return (i);
}
