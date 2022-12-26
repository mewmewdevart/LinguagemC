#include <stdio.h>

#define SPACE '_'

char *ft_xspace(char *str);
int ft_strlen(char *str);
int ft_strcountc(char *str, char a);

int main (void)
{
        char string[50] = "Era uma vez";

        printf("%s", ft_xspace(string));
        return (0);
}

int ft_strlen(char *str)
{
        int i;

        i = 0;
        while(str[i] != '\0')
                i++;
        return(i);
}

char *ft_xspace(char *str)
{
        int i;
        int n_espacos;
        int dim;

        i = ft_strlen(str); //i = n caracteres em str
        n_espacos = ft_strcountc(str, SPACE); //numero de espacos em str
        dim = 2 * i - n_espacos; //dimensao total do resultado da string

        str[dim--] = '\0';
        --i;
        while(i >= 0)
        {
                if (str[i] == SPACE)
                        str[dim--] = str[i]; //É um espaço a copiar apenas
                else
                {
                        str[dim--] = SPACE; //Coloca o espaco
                        str[dim--] = str[i]; //depois coloca os caracteres
                }
                i--;
        }

        return(str);
}

/* strcountc: Devolve o número de vezes que um determinado caractere apareceu em uma string. Sua definição: strcountc(char *z, char a) */

int ft_strcountc(char *str, char a)
{
        int i;
        int count;

        i = 0;
        count = 0;
        while(str[i] != '\0')
        {
                if(str[i] == a)
                        count++;
                i++;
        }
        return (count);
}
