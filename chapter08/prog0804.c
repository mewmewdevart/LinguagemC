#include <stdio.h>

int ft_strlen(char *str);

int main (void)
{
        char nome[100];

        printf("Introduza uma string: ");
        gets(nome);

        printf("%d", ft_strlen(nome));
        return (0);
}

int ft_strlen(char *str)
{
        char *ptr = str; //Guarda o endereço inicial str[0]

        while(*str != '\0') //Enquanto nao chega ao fim
                str++; //Incrementa o ponteiro
        return ((int)(str-ptr));
}
