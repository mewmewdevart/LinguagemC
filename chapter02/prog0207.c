#include <stdio.h>

int main (void)
{
        float raio, perimetro;
        double Pi = 3.1415927, area;

        printf("Introduza o Raio da Circunferencia: ");
        scanf("%f", &raio);

        area = Pi * raio * raio;
        perimetro = 2 * Pi * raio;

        printf("Area = %f\n Perimetro = %f\n", area, perimetro);
        return (0);
}
