#include <stdio.h>

int main (void)
{
        int number;
        printf("Digite um inteiro: ");
        scanf("%d", &number);
        if (number != 0)
                printf("O %d é diferente de zero.\n", number);
        else
                printf("O %d é igual a zero.\n", number);
        return (0);
}
