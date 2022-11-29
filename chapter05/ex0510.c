#include <stdio.h>

int entre(int x, int lim_inf, int lim_sup);

int main (void)
{
        printf("%d", entre(1, 0, 9));
        return (0);
}

int entre(int x, int lim_inf, int lim_sup)
{
        if (x >= lim_inf && x <= lim_sup)
                return (1);
        return (0);
}
