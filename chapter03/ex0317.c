#include <stdio.h>

int main (void)
{
        int number;
        printf("Digite um numero inteiro: ");
        scanf("%d", &number);

        switch(number)
        {
                case 0 : printf("O numero é zero!\n ");
                        break;
                default : printf("O numero é inteiro!\n");
        }
        return (0);
}
