#include <stdio.h>

int main (void)
{
        int dia, mes, ano;
        printf("Digite uma data nesse formato dia/mes/ano em numeros inteiros: ");
        scanf("%d %d %d", &dia, &mes, &ano);

        if (dia >= 1 && dia <= 31)
                if (mes >= 1 && mes <= 12)
                        printf("A data é valida! ");
                else
                        printf("A data não é valida");
        else
                printf("A data não é valida");
        return (0);
}
