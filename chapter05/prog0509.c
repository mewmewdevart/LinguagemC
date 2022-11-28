#include <stdio.h>

void linha(void);

int main(void)
{
        linha();
        return (0);
}

void linha(void)
{
        int i;
        for (i=1; i<=20; i++)
                putchar('+');
        putchar('\n');
}
