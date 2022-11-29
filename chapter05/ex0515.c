#include <stdio.h>

int cubo(int x);

int main (void)
{
        printf("%d", cubo(3));
        return (0);
}

int cubo(int x)
{
        return (x*x*x);
}
