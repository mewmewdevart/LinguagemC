#include <stdio.h>

char *ft_strcpy(char *dest, char *orig);

int main (void)
{
        char dest[100] = " ";
        char orig[100] = "larissa";

        printf("%s", ft_strcpy(dest, orig));
        return (0);
}

char *ft_strcpy(char *dest, char *orig)
{
        int i;
        int j;

        i = 0;
        j = 0;
        while(orig[i] != '\0')
        {
                dest[i] = orig[i];
                i++;
        }

        dest[i] = '\0';
        return(dest);
}
