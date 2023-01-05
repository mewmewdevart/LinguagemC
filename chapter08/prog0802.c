#include <stdio.h>

//Decremento
// Escreva um programa que mostre uma string da mesma forma que o incremento anteriormente apresentado
int main(void)
{
        char s[100];
        char *ptr = s; //ptr aponta para o primeiro caractere de s

        printf("Introduza uma string: ");
        gets(s);

        if (*ptr == '\0')
                return (0);

        //imprime a string normalmente
        while (*ptr != '\0') //percorre e printa
                putchar(*ptr++);

        //imprime a string ao contrario
        ptr--;
        while (ptr>=s) //ptr >= &s[0]
                putchar(*ptr--);

        return (0);
}
