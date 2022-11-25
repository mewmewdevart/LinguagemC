#include <stdio.h>

int main (void)
{
        long int segundos;
        printf("Digite x quantidade de segundos: ");
        scanf("%ld", &segundos);

        printf("Segundos a serem convertidos: %d\n", (int)segundos);
        printf("Segundos convertidos em minutos: %d\n", (int)segundos/60);
        printf("Segundos convertidos em horas: %d\n", (int)segundos/3600);
        return (0);
}
