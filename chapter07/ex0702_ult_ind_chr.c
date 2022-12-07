#include <stdio.h>

//Devolve o ultimo indice que encontrou o caractere ch na string str. Caso nao exista volta -1

int ft_ult_ind_chr(char *str, char ch);

int main (void)
{
        char str[] = "alface";
        char ch = 'a';

        printf("%d", ft_ult_ind_chr(str, ch));
        return (0);
}

int ft_ult_ind_chr(char *str, char ch)
{
        int i;
        int indice;

        i = 0;
        indice = -1;
        while(str[i] != '\0')
        {
                if(str[i] == ch)
                        indice = i;
                i++;
        }
        return(indice);
}
