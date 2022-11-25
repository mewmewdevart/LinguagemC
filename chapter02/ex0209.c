#include <stdio.h>

int main (void)
{
        int dia, mes, ano;

        printf("Digite um dia: ");
        scanf("%d", &dia);
        printf("Digita um mês: ");
        scanf("%d", &mes);
        printf("Digite um ano: ");
        scanf("%d", &ano);

        printf("O formato dd/mm/aaaa foi : %d/%d/%d\n", dia, mes, ano);
        return (0);
}
