#include <stdio.h>

void linha3x(void)
{
        int i;
        for (i = 1; i <= 3; i++)
                putchar('*');
        putchar('\n');
}

void linha4x(void)
{
        int i;
        for (i = 1; i <= 4; i++)
                putchar('*');
        putchar('\n');
}

void linha5x(void)
{
        int i;
        for (i = 1; i <= 5; i++)
                putchar('*');
        putchar('\n');
}

int main ()
{
        linha3x();
        linha4x();
        linha5x();
        linha4x();
        linha3x();
        return (0);
}
