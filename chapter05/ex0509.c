#include <stdio.h>

int impar_par(int number);

int main (void)
{
        printf("%d ", impar_par(6));
        return (0);
}

int impar_par(int number)
{
        if (number%2 == 0)
                return (1);
        return (0);
}
