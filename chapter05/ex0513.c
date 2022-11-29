#include <stdio.h>

int minus(int valor);

int main (void)
{
        printf("%d", minus(5));
        return (0);
}

int minus(int valor)
{
        if (valor)
                return (-valor);
        return (valor);
}
