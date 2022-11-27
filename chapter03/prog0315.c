#include <stdio.h>

int main (void)
{
        float salario;
        float imposto = 0.0;
        char sexo;
        printf("Digite o salario: ");
        scanf("%f", &salario);
        printf("Digite o sexo: ");
       scanf(" %c", &sexo);

        switch (sexo)
        {
                case 'm' :
                case 'M' : imposto = imposto + 0.05;
                case 'f' :
                case 'F' : imposto = imposto + 0.10;
        }
        printf("Imposto %.2f\n", salario * imposto);
        return (0);
}
