#include <stdio.h>

int ft_isnull(char *str);

int main (void)
{
        printf("%d", ft_isnull("larissa")); //return false
        return (0);
}
int ft_isnull(char *str)
{
        return (str[0] == '\0');
}
