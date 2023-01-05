#include <stdio.h>

//Diferença

int ft_strlen(char *str); //prototipo da funçao

int main (void)
{
        char s[100];
        char *ptr = s; //aponta para s[0]

        printf("Introduza uma string: ");
        gets(s);

        printf("%d\n", ft_strlen(s));
        return (0);
}

int ft_strlen(char *str)
{
        char *ptr = str; //guarda o endereço de inicial de str[0]

        while(*str != '\0')
                str++;

        return ((int) (str-ptr)); //endereço inicial - endereço final
}
