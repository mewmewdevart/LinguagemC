#include <stdio.h>

int main (void)
{
        int number1, number2;

        printf("Introduza um numero: ");
        scanf("%d", &number2);
        number1 = 1;
        while (number1 <= number2)
        {
                while (number2 != 0)
                {
                        printf("%3d %3d \n", number1, number2);
                        number1++;
                        number2--;
                }
                number1++;
        }
        return (0);
}
