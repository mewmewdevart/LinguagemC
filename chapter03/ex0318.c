#include <stdio.h>

int main (void)
{
        int ano, resto;
        printf("Digite um ano em formato aaaa: ");
        scanf("%d", &ano);

        if (((ano % 4 == 0) && (ano % 100 != 0) || (ano % 400 == 0)))
                printf("É um ano bissexto!\n");
        else
                printf("Não é um ano bissexto!\n");

        return (0);
}
