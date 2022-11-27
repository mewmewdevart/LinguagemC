#include <stdio.h>

int main (void)
{
        int ramos, i, j;

        printf("Digite o numero de ramos: ");
        scanf("%d", &ramos);

        i = 0;
        while (i <= ramos)
        {
                i++;
                j = 0;
                while (j != i)
                {
                        printf("*");
                        j++;
                }
                printf("\n");
        }
        return (0);
}
