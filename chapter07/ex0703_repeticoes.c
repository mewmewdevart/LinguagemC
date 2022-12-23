#include <stdio.h>

//Recebe uma string, retirando-lhe todos os caracteres os caracteres que nao se encomtram repetidos

char *ft_repeticoes(char *str);
int ft_strcountc(char *str, char ch);

int main (void)
{
        char string[25] = "larissa";

        printf("%s", ft_repeticoes(string));
        return (0);
}

char *ft_repeticoes(char *str)
{
        int i, count;

        i = 0;
        count = 0;
        while(str[i] != '\0')
        {
                if(ft_strcountc(str, str[i]) > 1) //Ocorre mais do que uma vez
                        str[count++] = str[i];
                i++;
        }

        str[count] = '\0';
        return(str);
}

//Devolve o número de vezes que um determinado caractere apareceu em uma string. Sua definição: strcountc(char *str, char ch)
int ft_strcountc(char *str, char ch)
{
        int i;
        int count;

        i = 0;
        count = 0;
        while(str[i] != '\0')
        {
                if(str[i] == ch)
                        count++;
                i++;
        }
        return (count);
}
