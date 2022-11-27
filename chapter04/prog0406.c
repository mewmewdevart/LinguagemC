#include <stdio.h>

int main (void)
{
        int n,  num, soma, produto;
        printf("Introduza um numero: ");
        scanf("%d", &num);

        for (soma = 0, n=produto=1; n <= num ; n++)
        {
                soma += n;
                produto *= n;
        }
        printf("Soma = %d\nProduto = %d\n", soma, produto);
        return (0);
}
