#include <stdio.h>

char ft_toupper(char c);

int main (void)
{
        printf("%c", ft_toupper('A'));
        return (0);
}

char ft_toupper(char c)
{
        if (c >= 'A' && c <= 'Z')
                return (c + 32);
        return (c);
}
