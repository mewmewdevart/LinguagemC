#include <stdio.h>

long int n_segundos(int n_horas);

int main (void)
{
        printf("%ld", n_segundos(2));
        return (0);
}

long int n_segundos(int n_horas)
{
        int segundos;

        segundos = n_horas * 3600;

        return (segundos);
}
