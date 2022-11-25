#include <stdio.h>

int main (void)
{
        char ch;
        printf("Introduza um caractere: ");
        scanf("%c", &ch);
        printf("O caractere '%c' tem o ASCII nº %d\n", ch, ch);
        return (0);
}
