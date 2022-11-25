#include <stdio.h>

int main (void)
{
        int num;
        printf("Introduza um inteiro: ");
        scanf("%d", &num);
        printf("FOi introduzido %d cuja a conversao em ascii é %c\n", num, (char)num);
        printf("O caractere seguinte é = '%c' que possui o ascii %d\n", (char)(num+1), num+1);
        return (0);
}
