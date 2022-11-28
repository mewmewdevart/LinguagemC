#include <stdio.h>

int dobro(int rest);
int soma(int a, int b);

int main (void)
{
        int rest, num1, num2;
        printf("Digite dois numeros: ");
        scanf("%d %d", &num1, &num2);

        rest = soma(num1, num2);

        rest = dobro(rest);
        printf("%d\n", rest);
        return (0);
}

int soma (int a, int b)
{
        int rest;

        rest = a + b;
        return (rest);
}

int dobro (int rest)
{
        rest *= 2; 
        return (rest);
}
