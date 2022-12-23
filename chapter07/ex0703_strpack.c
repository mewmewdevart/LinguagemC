#include <stdio.h>

//Recebe uma string e compacta num unico caractere qualquer conjunto de caracteres repetidos

char *ft_strpack(char *str);

int main(void)
{
        char string[100] = "Arrecadddaccao";
        char string2[100] = "   AAAaaaBBB CCCIIIALLLFFFA";
        printf("%s\n", ft_strpack(string));

        printf("%s", ft_strpack(string2));
        return (0);
}

char *ft_strpack(char *str)
{
        int i;
        int count;

        i = 0;
        count = 0;
        while(str[i] != '\0')
        {
                if (str[i] != str[i+1])
                        str[count++] = str[i];
                i++;
        }
        str[count] = '\0';
        return (str);
}
