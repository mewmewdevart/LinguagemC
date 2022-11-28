#include <stdio.h>

int max(int a, int b);

int main (void)
{       int rest;
        rest = max(8, 6);
        printf("%d", rest);
        return (0);
}

int max(int a, int b)
{
        if (a>b)
                return (a);
        return (b);
}
