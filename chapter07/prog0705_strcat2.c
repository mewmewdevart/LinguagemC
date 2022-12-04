#include <stdio.h>

int ft_strlen(char *str);
char *ft_strcat(char *dest, char *orig);

int main (void)
{
        char dest[] = "larissa";
        char orig[] = "amabolo";

        printf("%s", ft_strcat(dest, orig));
        return (0);
}

int ft_strlen(char *str)
{
        int i;

        i = 0;
        while(str[i] != '\0')
                i++;
        return (i);
}
char *ft_strcat(char *dest, char *orig)
{
        int i, len;

        i = 0;
        len = ft_strlen(dest);
        while(dest[len + i] = orig[i])
                i++;

        return (dest);
/*        int i, len;

        i = 0;
        len = ft_strlen(dest);
        while(dest[len++] = orig[i++])
                ;
        dest[len] = '\0';
        return (dest);
*/
}
