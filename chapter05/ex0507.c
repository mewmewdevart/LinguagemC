#include <stdio.h>

void n_segundos(int horas, char tipo);

int main (void)
{
        n_segundos(1, 'm');
        return (0);        
}

void n_segundos(int horas, char tipo)
{
        switch (tipo)
        {
                case 'h' :
                        printf(" %d hora!", horas);
                        break;
                case 'm' :
                        printf(" %d minutos!", horas * 60);
                        break;
                case 's' :
                        printf(" %d segundos!", horas * 3600);
                        break;
                default :
                        printf("Formato invalido! \n");
        }
}
