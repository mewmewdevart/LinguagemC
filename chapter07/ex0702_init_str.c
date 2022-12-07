#include <stdio.h>

//Torna a string vazia
char *ft_init_str(char *str);

int main (void)
{
        char str[] = "larissa";

        printf("%s", ft_init_str(str));
        return (0);
}

char *ft_init_str(char *str)
{
        str[0] = '\0';
        return(str);
}
