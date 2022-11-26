#include <stdio.h>

int main (void)
{
        int number1, number2;

        printf("Introduza dois inteiros: ");
        scanf("%d %d", &number1, &number2);

        printf("%d > %d = %d\n", number1, number2, number1>number2);
        printf("%d < %d = %d\n", number1, number2, number1<number2);
        printf("%d == %d = %d\n", number1, number2, number1==number2);
        printf("%d >= %d = %d\n", number1, number2, number1>=number2);
        printf("%d <= %d = %d\n", number1, number2, number1<=number2);
        printf("%d != %d = %d\n", number1, number2, number1!=number2);
        return (0);
}
