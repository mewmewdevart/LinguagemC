#include <stdio.h>

int main (void)
{
        float salario;

        printf("Qual o salario? ");
        scanf("%f", &salario);

        salario = salario > 1000 ? salario * 1.05 : salario * 1.07;
        printf("Novo salario: %.2f\n", salario);
        return (0);
}
