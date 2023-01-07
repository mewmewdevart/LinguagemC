#include <stdio.h>

//Declare e inicie um vetor de strings e mostre-as, uma a uma, recorrendo simplesmente a ponteiros

#define N_STRINGS 3

int main (void)
{
        char vetor[N_STRINGS][20] = {"Olá", "Joaozinho", "Maria"};
        char (*ptr)[20] = vetor; //Um ponteiro para vetores de 20 chars

        char *p;

        while (ptr-vetor < N_STRINGS)
        {
                p = *ptr; //p recebe a string apontada por ptr
                while(*p != '\0')
                        putchar(*p++);
                putchar('\n');
                ptr++;
        }
        return (0);
}
