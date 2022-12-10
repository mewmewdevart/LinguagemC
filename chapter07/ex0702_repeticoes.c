#include <stdio.h>
#include <string.h>

/*
        Você pode criar um objeto que armazena todas as letras da string, seguida do número de ocorrências do caractere.
        Em seguida, basta retornar o número de propriedades desse objeto cujo valor, isto é, o número de aparições do caractere, for maior que 1.
*/

//String que retira todos os caracteres que sao repetidos

char *ft_repeticoes(char *str);

int main (void)
{
        char str[25] = "larissa";

        printf("%s", ft_repeticoes(str));
        return (0);
}

char *ft_repeticoes(char *str)
{
        int i;
        int j;

        j = i = 0;
        while(str[i] != '\0')
        {
                if(strcountc(str, str[i]) > 1) //ocorre mais de uma vez?
                        str[j++] = str[i];
                i++;
        }

        str[j] = '\0';
        return (str);
}


