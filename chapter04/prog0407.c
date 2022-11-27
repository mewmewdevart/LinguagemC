#include <stdio.h>

int main (void)
{
        int i, j;

        for (i=1 ; i <= 5; i++)
        {
                for (j=1 ; j <= 10; j++)
                        printf("%2d * %2d = %2d\n", i, j, i * j);

                if (i != 5)
                {
                        printf("Pressione <ENTER> para continuar ...");
                        getchar();
                }
        }
        return (0);
}
