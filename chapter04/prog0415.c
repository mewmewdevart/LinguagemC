#include <stdio.h>

int main (void)
{
        int number;
        number = 0;
        while (number <= 255)
        {
                printf("%3d = %3c \n", number, (char)number);
                number++;
        }
        return (0);
}
