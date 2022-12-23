#include <stdio.h>

char *ft_strlwr(char *str);

int main (void)
{
        char string[25];

        printf("Digite uma string: ");
        scanf(" %s", string);

        printf("A string convertida em minusculas: %s", ft_strlwr(string));
        return (0);
}

char *ft_strlwr(char *str)
{
        int i;
        int count;

        i = 0;
        count = 0;
        while(str[i] != '\0')
        {
                if (str[i] >= 'A' && str[i] <= 'Z')
                        str[count] = str[count] + 32;
                i++;
                count++;
        }

        str[count] = '\0';
        return(str);
}
