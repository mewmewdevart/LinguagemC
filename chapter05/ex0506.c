#include <stdio.h>

int n_segundos (int nbr, char op);

int main (void)
{
        int horas;
        char tipo;
        printf("Digite a quantidade de horas que voce deseja que seja convertida e o tipo (s/h/m)! \n");
        scanf("%d %c", &horas, &tipo);
        printf("%d", n_segundos(horas, tipo));
        return (0);
}

int n_segundos(int nbr, char op)
{
        if (op == 'h')
                return (nbr);
        if (op == 'm')
                return (nbr * 60);
        if (op == 's')
                return (nbr * 3600);
        else
                return (0);
}
