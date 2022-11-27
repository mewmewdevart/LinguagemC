#include <stdio.h>

int main (void)
{
        int mes;
        printf("Digite a numeração do mês que você deseja checar! ");
        scanf(" %d", &mes);

        if (mes == 2)
        {
                printf("O mês tem 28 dias (29 em anos bissextos)!\n");
                return (0);
        }
        if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
                printf("O mês tem 31 dias!\n");
        else
                printf("O mês tem 30 dias!\n");

        return (0);
}
