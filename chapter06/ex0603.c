#include <stdio.h>

#define MAX 3
void transpor(int v[MAX][MAX]);
void imprime(int v[][MAX]);

int main (void)
{
        int x[][MAX] = {{1,2,3}, {4,5,6}, {7,8,9}}; //MATRIX 3X3
        
        puts("Matriz inicial! ");
        imprime(x);
        transpor(x);
        puts("Depois da inversão! ");
        imprime(x);
        return (0);
}

void transpor(int v[MAX][MAX])
{
        int i, j, tmp;

        i = 0;
        while(i < MAX)
        {
                j = i+1;
                while(j < MAX)
                {
                        tmp = v[i][j];
                        v[i][j] = v[j][i];
                        v[j][i] = tmp;
                        j++;         
                }
                i++;
        }
}

void imprime(int v[][MAX])
{
        int i, j;

        i = 0;
        while(i < MAX)
        {
                while( j < MAX )
                {
                        printf("%d ", v[i][j]);
                        putchar('\n');
                        j++;
                
                }
                i++;
        }
}
