#include <stdio.h>

int ft_issquare(int x, int y);

int main (void)
{
        printf("%d", ft_issquare(25, 5));
        return (0);
}

int ft_issquare(int x, int y)
{
        if (x == (y * y))
                return (1);
        return (0);
}
