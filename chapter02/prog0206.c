#include <stdio.h>

int main (void)
{
        short int idade;
        int montante;
        long int n_conta;
        printf("Qual é a idade? :");
        scanf("%hd", &idade);

        printf("Qual o montante a ser depositado? ");
        scanf("%d", &montante);

        printf("Qual o numero da conta? ");
        scanf("%ld", &n_conta);

        printf("Uma pessoa de %hd anos depositou $%d na conta %ld\n", idade, montante, n_conta);
        return (0);
}
