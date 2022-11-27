#include <stdio.h>

int main (void)
{
        int initial, number, calc;


        initial = 1;
        while (initial <= 5)
        {
                number = 1;
                while (number <= 10)
                {
                        printf("%2d * %2d = %2d\n", initial, number, initial * number);
                        number++;
                }
                initial++;
                printf("~~~~~~~~~~~~\n");
        }
        return (0);
}
