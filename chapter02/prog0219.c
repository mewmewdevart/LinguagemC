#include <stdio.h>

int main (void)
{
        float real;
        printf("Digite um numero real: ");
        scanf("%f", &real);
        printf("Parte inteira: %d\n", (int)real);
        printf("Parte fracionaria: %f\n", real - ((int) real));
        return (0);
}
