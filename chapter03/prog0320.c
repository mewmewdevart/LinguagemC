
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
        switch (tipo)
        {
                case 'm':
                case 'M': res = n_horas < 0 ? 0 : n_horas * (long)60;
                        break;
                case 's':
                case 'S': res = n_horas < 0 ? 0 : n_horas * (long)3600;
                        break;
                case 'd':
                case 'D': res = n_horas < 0 ? 0 : n_horas * (long)36000;
                        break;
        }
        printf("%dh --> %ld%c \n", n_horas, res, tipo);
        return (0);
}
