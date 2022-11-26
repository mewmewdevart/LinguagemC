#include <stdio.h>

int main (void)
{
        float salario;
        printf("Digite o seu salario: ");
        scanf("%f", &salario);
        if (salario < 100000)
                salario = salario + 1000;
        else
        {
                printf("O salario nao é inferior, portanto sem adicoes.");
                return (0);
        }

        printf("O salario anterior foi somado em R$ 1000 totalizando R$ %.2f\n ", salario);
        return (0);
}
