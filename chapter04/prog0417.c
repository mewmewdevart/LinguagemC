#include <stdio.h>

int main (void)
{
        int number, n1, n2;
        char ch;

        printf("Introduza um numero: ");
        scanf("%d", &number);
        printf("Introduza um caractere: ");
        scanf(" %c", &ch);

        n1 = 1;
        while (n1 <= number)
        {
                n2 = 1;
                while(n2 <= number)
                {
                        printf("%c", ch);
                        n2++;
                }
                printf("\n");
                n1++;
        }
        return (0);
}
