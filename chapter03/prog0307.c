#include <stdio.h>

int main (void)
{
        float salario;
        printf("Digite o salario: ");
        scanf("%f", &salario);
        if (salario <= 0)
                printf("Salario invalido!\n");
        else
                if (salario > 1000)
                        printf("Imposto de %.2f", salario * 0.10);
                else
                        printf("Imposto de %.2f", salario * 0.05);
        return (0);
}
