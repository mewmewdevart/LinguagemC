#include <stdio.h>

int main (void)
{
        float salario, imposto = 0.0;
        char sexo;
        printf("Introduza o salario: ");
        scanf("%f", &salario);
        printf("Introduza o sexo: ");
        scanf(" %c", &sexo);

        switch (sexo)
        {
                case 'f' :
                case 'F' : imposto = 0.10;
                           break;
                case 'm' :
                case 'M' : imposto = 0.15;
                           break;
        }
        printf("Imposto de %.2f\n", salario*imposto);
        return (0);
}
