#include <stdio.h>

int linha(int nbr)
{
        int i;
        for (i=1; i<=nbr; i++)
                putchar('*');
        putchar('\n');
}
int main (void)
{
        linha(4);
        linha(8);
        linha(12);
        linha(8);
        linha(4);
        return (0);
}
