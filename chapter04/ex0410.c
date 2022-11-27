#include <stdio.h>

int main (void)
{
        int number;
        printf("Digite um numero entre 0 e 100: ");
        scanf("%d", &number);

        if (number >= 1 && number <=100)
                printf("\nO numero %d está entre 0 e 100! \n", number);
        else
                main();
        return (0);
}
