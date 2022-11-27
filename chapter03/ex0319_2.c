#include <stdio.h>

int main (void)
{
        int mes;
        printf("Digite a numeração de um mês: ");
        scanf("%d", &mes);

        switch (mes)
        {
                case 2: printf("O mes tem 28 dias (29 em anos bissextos)!\n");
                        break;
                case 1 :
                case 3 :
                case 5 :
                case 7 :
                case 8 :
                case 10:
                case 12: printf("O mês tem 31 dias!\n");
                         break;
                default : printf("O mês tem 30 dias!\n");
        }
        return (0);
}
