#include <stdio.h>

int main (void)
{
        int base, number1, number2;
        printf("Digite dois numeros inteiros: ");
        scanf("%d %d", &number1, &number2);

        while (number1 <= number2 )
        {
                printf("%c\n", (char)number1);
                number1++;
        }
}
