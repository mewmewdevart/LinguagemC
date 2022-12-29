#include <stdio.h>

char *ft_prox_char(char *str);

int main (void)
{
        char string[100] = "A8M0";

        printf("%s", ft_prox_char(string));
        return (0);
}

//Coloca em cada posicao da string str o proximo caractere ASCII
char *ft_prox_char(char *str)
{
        int i;

        i = 0;
        while(str[i] != '\0')
        {
                if(str[i])
                        str[i] += 1;
                i++;
        }

        return (str);
}
