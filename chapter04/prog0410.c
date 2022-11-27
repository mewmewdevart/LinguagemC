#include <stdio.h>

int main (void)
{
        int i;

        i = 1;
        while(i <= 100)
        {
                if (i == 30)
                        break;
                else
                        printf("%2d\n", 2*i);
                i++;
        }
        printf("Fim do laço!");
        return (0);
}
