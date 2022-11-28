#include <stdio.h>

void max(float x, float y, float w);

int  main (void)
{
        max(11, 7, 8);
        return (0);
}

void max(float x, float y, float w)
{
        if (x >= y && x >= w)
                printf("%f é maior! ", x);
        if (y >= x && y >= w)
                printf("%f é maior! ", y);
        if (w >= y && w >= x)
                printf("%f é maior! ", w);
}
