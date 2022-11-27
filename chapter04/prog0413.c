#include <stdio.h>

int main (void)
{
        int i, j;

        i = 1;
        while (i <10)
        {
                printf("%d \n", i);
                i++;
                j = 1;
                while (j != i)
                {
                        printf("%d", j);
                        j++;
                }
        }
        return (0);
}
