#include <stdio.h>

int main (void)
{
        int number, calc;
        printf("Digite um numero: ");
        scanf("%d", &number);

        calc = 0;
        while (calc <= 10)
        {
                printf("%2d * %2d = %2d\n", number, calc, number * calc);
                calc++;
        }
        return (0);
}
