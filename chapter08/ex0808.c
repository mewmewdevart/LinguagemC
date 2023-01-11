#include <stdio.h>

char *ft_strdelUpper(char *str);
//Implemente a função usando unicamente operações entre ponteiros
//Apaga todos os caracteres maiusculos em str
int main (void)
{
        char str[100] = "LArissA";

        printf("%s", ft_strdelUpper(str));
        return (0);
}

char *ft_strdelUpper(char *str)
{
        int i;
        int j;

        i = 0;
        j = 0;
        while(str[i] != '\0')
        {
                if(str[i] >= 'a' && str[i] <= 'z')
                        str[j++] = str[i];
                i++;
        }

        str[j] = '\0';
        return (str);
}
