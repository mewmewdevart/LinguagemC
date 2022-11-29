#include <stdio.h>

char ft_tolower(char c);

int main (void)
{
        printf("%c",ft_tolower('a'));
        return (0);
}

char ft_tolower(char c)
{
        if (c >= 'a' && c <= 'z')
                return (c-32);
        return (c);
}
