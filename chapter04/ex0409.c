#include <stdio.h>

int main (void)
{
        int i, j, alfa;
        char letra;
        printf("A partir de qual letra? ");
        scanf("%c", &letra);
        printf("Quantas letras do alfabeto? ");
        scanf("%d", &alfa);

        i = 1;
        while (i <= alfa)
        {
                i++; //65 - 90
                j = 1;
                while (j <= i)
                {
                        printf("%c", letra);
                        j++;
                }
                letra += 1;
                printf("\n");
        }
                return (0);
}
