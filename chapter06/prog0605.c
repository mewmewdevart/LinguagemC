#include <stdio.h>

#define NUM 10 //Sem ponto e virgula

void inic(int s[]);

int main(void)
{
        int v[NUM], i;

        inic(v);

        for (i = 0; i < NUM; i++)
                v[i] = i;

        for (i=NUM-1; i>= 0; i--)
                printf("%d\n", v[i]);
        return (0);
}

void inic(int s[])
{
        int i;
        for (i=0; i < NUM; i++)
                s[i] = 0;
}
