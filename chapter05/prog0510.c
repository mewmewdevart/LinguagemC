#include <stdio.h>

int ft_isdigit(char nbr);

int main (void)
{
        char c;
        while (1)
        {
                c = getchar();
                if (!ft_isdigit(c)) ///se nao for digito
                        putchar(c);
        }
        return (0);
}

int ft_isdigit(char nbr)
{
        if (nbr >= '0' && nbr <= '9')
                return (1);
        return (0);
}
