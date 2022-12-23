#include <stdio.h>

int main (void)
{
        char string[25+1]; //25 caracteres + o nulo

        printf("Digite o seu nome: ");
        scanf(" %s", string);

        printf("%s", string);
        return (0);
}
