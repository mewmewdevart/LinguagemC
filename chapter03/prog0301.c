#include <stdio.h>

int main (void)
{
        int x, y;
        printf("Digite o valor de x: ");
        scanf("%d", &x);
        printf("Digite o valor de y: ");
        scanf("%d", &y);

        if (x > y)
                printf("%d é maior do que %d\n", x, y);
        printf("%d é menor do que %d\n", x, y);
        return (0);
}
