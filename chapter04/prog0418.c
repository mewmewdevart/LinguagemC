#include <stdio.h>

int main (void)
{
        int number, i;

        printf("Introduza um numero: ");
        scanf(" %d", &number);

        i = number;
        while (i++)
        {
                if (i%10 == 0)
                        break;
                else
                        if (i%3 == 0)
                                continue;
                printf("%d\n", i);
        }
        return (0);
}
