#include <stdio.h>

int main (void)
{
        int n_horas;
        long res;
        char tipo;

        printf("Digite o numero de horas: ");
        scanf("%d", &n_horas);
        printf("O que mostrar (m/s/d)? ");
        scanf(" %c", &tipo);
        if (tipo == 'm' || tipo == 'M')
                res = n_horas < 0 ? 0: n_horas * (long)60;
        else
                if (tipo == 's' || tipo == 'S')
                        res = n_horas < 0 ? 0 : n_horas * (long)3600;
                else
                        if (tipo =='d' || tipo =='D')
                                res = n_horas < 0 ? 0 : n_horas * (lonh)36000;

        printf("%dh --> %ld %c", n_horas, res, tipo);
        return (0);
}
