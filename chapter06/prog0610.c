#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMS 49 //Total de numeros jogaveis
#define MIN_APOSTA 6 //Total de apostas minimas
#define NUM_LIN 7 //Total de numeros apresentados por volante

void Inic_Random();
void Inic(int v[NUMS]);
int Ler_Ns_Apostar();
void Gerar(int *v, int n);
void Apresentar(int res[]);

int main (void)
{
        int vetor[NUMS];
        int n_nums; //Numeros para jogar 

        Inic_Random();
        while(1)
        {
                Inic(vetor);
                if ((n_nums = Ler_Ns_Apostar())== 0)
                        Gerar(vetor, n_nums); //gera numeros para apostar
                Apresentar(vetor);
        }
        return (0);
}


//Inicia o gerador de numeros aleatorios com nº que depende da hora que se executa a função
void Inic_Random()
{
        long ultime;
        time (&ultime);
        srand((unsigned) ultime);
}

//Inicia com zero o vetor de controle dos numeros selecionados
void Inic(int v[NUMS])
{
        int i;

        i = 0;
        while (i < NUMS)
        {
                v[i] = 0;
                i++;
        }
}

//Le o numero a apostar
int Ler_Ns_Apostar()
{
        int n;

        do
        {
                printf("Quantos numeros quer apostar ( 0 - Terminar ): ");
                scanf("%d", &n);
        }
        while ((n < MIN_APOSTA || n > NUMS) && n != 0);
        return n;
}

//Gera numeros aleat.
void Gerar(int *v, int n)
{
        int i, indice;

        i = 1;
        while(i<=n)
        {
                indice = rand()%NUMS;
                if (v[indice] == 0)
                        v[indice] = 1;
                else
                        i--;
                i++;
        }
}

//Apresenta o formato
void Apresentar(int res[])
{
        int i;

        i = 0;
        while ( i < NUMS )
        {
                if(res[i] == 0)
                        printf(" %2d", i+1);
                else
                        printf(" XX");
                if((i+1)%NUM_LIN==0)
                        putchar('\n');
                i++;
        }
        putchar('\n');
}
