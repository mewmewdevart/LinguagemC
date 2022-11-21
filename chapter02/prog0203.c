#include <stdio.h>

int main (void)
{
        int number1, number2;
        printf("Introduza dois numeros: ");
        scanf("%d %d", &number1, &number2);
        printf("O resultado da soma entre %d + %d = %d", number1, number2, number1+number2);
        return (0);
}
