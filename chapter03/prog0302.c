#include <stdio.h>

int main (void)
{
        int number;
        printf("Escreva um numero: ");
        scanf("%d", &number);
        if (number >=0)
                printf("Positivo! ");
        else
                printf("Negativo! ");
        return (0);
}
