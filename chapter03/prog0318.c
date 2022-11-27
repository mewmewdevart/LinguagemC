#include <stdio.h>

int main (void)
{
        int n_horas;
        long n_seg;

        printf("Numero de horas: ");
        scanf("%d", &n_horas);
        n_seg = n_horas < 0 ? 0 : n_horas * (long)3600;
        printf("%d Horas tem %ld segundos\n", n_horas, n_seg);
        return (0);
}
