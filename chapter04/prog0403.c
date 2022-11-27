#include <stdio.h>

int main (void)
{
        int number;

        number = 1;
        while (number <= 10)
        {
                printf("5 * %2d = %2d\n", number, 5*number);
                number++;
        }
        return (0);
}
