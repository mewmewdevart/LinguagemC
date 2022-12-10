#include <stdio.h>

//Recebe uma string e a compacta num unico caractere qualquer conjunto de caracteres repetidos consecutivos

char *ft_strpack(char *str);
char *ft_compara(char *str);
int main (void)
{
        char str[30] = "Arrecaddaccao";

        printf("%s", ft_strpack(str));
        return (0);
}

char *ft_strpack(char *str)
{
        int i, j;

        j = i = 0;
        while(str[i] != '\0')
        {
             if(str[i] != str[j]) //se str[i] for diferente de str[j]
                     str[++j] = str[i]; //O str[j] vai andar uma posição e ira receber o str[i]
             i++;
        }

        //o str [1 + j] (para adicionar o \0 no final)
        str[++j] = '\0';
        return (str);
}

