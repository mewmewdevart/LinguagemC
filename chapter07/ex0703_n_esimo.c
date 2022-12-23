#include <stdio.h>

char ft_nesimo(char *str, int n);

int main (void)
{
        char string[25] = "EraUmaVez";
        int number = 3;

        // 0 1 2 ( 2-1 );
        //[E][r][a]

        printf("%c", ft_nesimo(string, number));
        return (0);
}

char ft_nesimo(char *str, int n)
{
        return (str[n-1]);
}
