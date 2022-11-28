#include <stdio.h>

int ft_isAbsoluto(int number);

int main (void)
{
        int valor;
        printf("Digite um valor: ");
        scanf("%d", &valor);

        ft_isAbsoluto(valor);

        printf("%d", valor);
        return (0);
}

int ft_isAbsoluto(int number)
{
        if (number >= 0)
                return number;
        else
                return -number;
}
