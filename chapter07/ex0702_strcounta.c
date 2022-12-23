#include <stdio.h>

int ft_strcounta(char *str); //Devolve o numero de caracteres alfabeticos

int main (void)
{
        char string[25+1];

        printf("Digite alguns caracteres: ");
        gets(string);

        printf("A quantidade de caracteres alfabeticos encontrados na frase é : %d", ft_strcounta(string));;
        return (0);
}

int ft_strcounta(char *str)
{
        int i;
        int count;

        i = 0;
        count = 0;
        while(str[i] != '\0')
        {
                if(str[i] >= 'a' && str[i] <= 'z')
                        count++;
                i++;
        }
        return (count);
}
