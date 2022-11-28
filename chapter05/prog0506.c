#include <stdio.h>

int linha(int number, char sign);

int main (void)
{
        int nbr;
        char ch;

        printf("Digite um numero: ");
        scanf("%d", &nbr);
        printf("Digite um caractere: ");
        scanf(" %c", &ch);

        putchar('\n');

        nbr = nbr - 2;
        linha(nbr, ch);
        nbr = nbr + 2;
        linha(nbr, ch);
        nbr = nbr - 2;
        linha(nbr, ch);
        nbr = nbr + 2;
        linha(nbr, ch);
        return (0);
}

int linha (int number, char sign)
{
        int i;
        for (i=1; i <= number; i++)
                putchar(sign);
        putchar('\n');
}
