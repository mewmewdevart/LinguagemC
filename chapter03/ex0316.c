#include <stdio.h>

int main (void)
{
        int number;
        printf("Digite um numero inteiro: ");
        scanf("%d", &number);

        if (number)
                printf("O numero é inteiro!\n");
        else
                printf("O numero nao é inteiro");
        return (0);
}
