#include <stdio.h>

float max(float vetor[], int n);

int main (void)
{
        float vetor[] = {8, 9, 10};
        int number = 2;//faz a checagem entre os ... primeiros numeros

        printf("%f", max(vetor, number));
        return (0);
}

float max(float v[], int n)
{
        int i;
        float maior = v[0]; //inicializado com zero

        i = 1;
        while (i < n)
        {
                //percorre elemento do vetor por elemento
                if ( v[i] > maior ) //se indice for > que maior
                        maior = v[i]; // v[i] envia o valor pra maior
                i++; //incrementa
        }

        //retorna o valor de maior
        return (maior);
}

/*
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
*/
