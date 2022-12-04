#include <stdio.h>

int main (void)
{
        char Nome[50], Sobrenome[50];
        printf("Introduza um nome: ");
        scanf("%s", Nome);
        printf("Introduza um sobrenome: ");
        scanf("%s", Sobrenome);

        printf("Nome completo: %s %s\n", Nome, Sobrenome);
        return (0);
}
