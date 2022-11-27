#include <stdio.h>

int main (void)
{
        int number;

        number = 1;
        while (number <= 255)
        {
                printf("%d --> %c\n", number, (char)number);
                number++;
        }
        return (0);
}
