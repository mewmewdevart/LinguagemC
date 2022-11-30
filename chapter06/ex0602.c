#include <stdio.h>

float max(float vetor[], int n);

int main (void)
{
        float vetor[] = {8, 9, 10};
        int number = 2;//faz a checagem entre os ... primeiros numeros

        printf("%f", max(vetor, number));
        return (0);
}

float max(float vetor[], int n)
{
                if (vetor[0] > vetor[1] && vetor[0] > vetor[2])
                        return(vetor[0]);
                else
                        if (vetor[1] > vetor[0] && vetor[1] > vetor [2])
                                return (vetor[1]);
                        else
                                return (vetor[2]);
}
