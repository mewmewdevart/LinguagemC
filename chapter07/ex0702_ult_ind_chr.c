#include <stdio.h>

int ult_ind_chr(char *str, char c);
//Devolve o ultimo indice em que encontrou o caractere c em s. Caso nao exista retorna -1

int main (void)
{
        char string[25]; // [l][a][r][i][s][s][a]
        char ch;

        printf("Digite uma string: ");
        scanf(" %s", string); 

        printf("Digite o caractere que deseja procurar dentro da string: ");
        scanf(" %c", &ch);

        printf("O ultimo indice do caractere é : %d", ult_ind_chr(string, ch));
        return (0);
}

int ult_ind_chr(char *str, char c)
{
        int i;
        int ult_indice;

        i = 0;
        ult_indice = 0;
        while(str[i] != '\0')
        {
                if(str[i] == c)
                        ult_indice = i;
                i++;
        }

        if(ult_indice == 0)
                return (-1);
        return (ult_indice);
}
