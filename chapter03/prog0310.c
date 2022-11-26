#include <stdio.h>

int main (void)
{
        float salario;

        printf("Qual o salario: ");
        scanf("%f", &salario);
        if (salario > 1000)
                salario = salario * 1.05;
        else
                salario = salario * 1.07;
        printf("Novo salario: %.2f\n", salario);
        return (0);
}
