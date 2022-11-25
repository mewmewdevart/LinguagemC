#include <stdio.h>

int main (void)
{
        int dia, mes, ano;

        printf("Digite um dia: ");
        scanf("%d", &dia);
        printf("Digite um mês: ");
        scanf("%d", &mes);
        printf("Digite um ano: ");
        scanf("%d", &ano);

        printf("O formato aaaa-mm-dd = %d-%d-%d convertido para dd/mm/aaaa = %d/%d/%d", ano, mes, dia, ano, mes, dia);
        return (0);
}
