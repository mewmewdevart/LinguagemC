#include <stdio.h>


//Copia n caracteres do vetor de origem (orig) para o vetor destino (dest) e devolve o vetor de dest
char *ft_memcpy(char *dest, char *orig, int n);

int main (void)
{
        char destiny[] = {};
        char orig[] = {"larissa"};
        int number = 3; //[0][1][2][3][4][5][6];

        printf("%s", ft_memcpy(destiny, orig, number));
        return (0);
}

char *ft_memcpy(char *dest, char *orig, int n)
{
        int i, j;

        i = 0;
        j = 0;
        if (*orig == 0)
                return (0);
        while ( i <= n )
        {
                while(orig[i] != dest[j])
                {
                        dest[j] = orig[i];
                        j++;
                }
                i++;
        }
        dest[j] = '\0';
        return (dest);

}
