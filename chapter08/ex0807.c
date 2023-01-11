#include <stdio.h>

int main (void)
{
        int v[5] = {10, 20, 30, 40, 50}; //vetor para 5 inteiros
        int *pv; //ponteiro para inteiro
        int **ppv; //ponteiro para ponteiro para inteiro

        /*
         a)
                pv = &v; //ou pv = &v[0];
                ppv = &pv;

         b)
                      0   1   2   3   4  5
                v = [10][20][30][40][50]['\0']

                                Endereço
                v[0] = 10       | 100 | //pv tem esse endereço
                v[1] = 20       | 101 |
                v[2] = 30       | 102 |
                v[3] = 40       | 103 |
                v[4] = 50       | 104 |
                ...
                pv              | 500 |
                ...
                ppv             | 700 |

        c)
                printf("%d %d %d\n", v, *pv, **ppv);
                printf("%d %d %d\n", v[1], (*pv+1), (**pv+1));
                printf("%d %d %d\n", v[2], (*pv+3), (**pv+4));
                printf("%d %d %d\n", (v[0])-1), ((*pv+1)-1), ((**pv+2)-1));
                */
        return (0);
}
