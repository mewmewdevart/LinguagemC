#include <stdio.h>

int main (void)
{
        //formato erroneo
        int num = 1000;
        printf("Introduza um caractere: ");
        scanf("%c", &num);
        printf("O valor de num = %d cujo o caractere = '%c'\n", num, (char)num);
        return (0);
}
