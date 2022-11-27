#include <stdio.h>

int main (void)
{
        int i;

        i = 1;
        while (i <= 20)
        {
                if (i==10)
                        continue;
                else
                        printf("%d\n", i);
                i++;
        }
        return (0);
}
