#include <stdio.h>

float max(float v[], int n);

int main(void)
{
        float ex[] = {10, 70, 30, 40, 50, 60, 30};

        printf("O maior dos 3 primeiros elementos é = %f\n", max(ex, 3));
        return (0);
}

float max(float v[], int n)
{
        int i;
        float maior = v[0];

        i = 1;
        while(i < n)
        {
                if(v[i] > maior)
                        maior = v[i];
                i++;
        }
        return (maior);
}
