#include <stdio.h>

int ft_isspecial(int x);

int main (void)
{
        printf("%d", ft_isspecial(12));
        return (0);
}

int ft_isspecial(int x)
{
        if ((x*2) % 2 == 0)
                return(1);
        return (0);
}
