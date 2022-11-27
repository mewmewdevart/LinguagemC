#include <stdio.h>

int main (void)
{
        int number;
        printf("Digite um numero inteiro: ");
        scanf("%d", &number);

        if (number != 0)
                printf("O numero é inteiro! \n");
        else
                printf("O numero é zero! \n");
        return (0);
}
