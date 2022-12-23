#include <stdio.h>

char *ft_init_str(char *str);

int main (void)
{
        char string[25];

        printf("Digite uma frase: ");
        scanf(" %s", string);

        printf("O valor retornado na string é %s: ", ft_init_str(string));
        return (0);
}

char *ft_init_str(char *str)
{
        return(str[0] = '\0');
}
