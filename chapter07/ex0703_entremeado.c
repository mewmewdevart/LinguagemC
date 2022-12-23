#include <stdio.h>

//Transforma a string str, deixando apenas os caracteres existentes de n em n posicoes
char *ft_entremeado(char *str, int n);
int ft_strlen(char *str);

int main (void)
{
        char string[100] ="ABCDEFGHIJ";
        int number = 2;

        printf("%s", ft_entremeado(string, number));

        return (0);
}

char *ft_entremeado(char *str, int n)
{
        int i;
        int count;
        int len;

        len = ft_strlen(str);
        if (n == 0)
                return (str);
        i = 0;
        count = 0;
        while(i < len)
        {
                str[count++] = str[i];
                i = i + n + 1;

                                /*

                    0  1  2  3  4  5  6  7  8  9
                   [A][ ][ ][D][ ][ ][G][ ][ ][J]

                   1. Vez que entra no loop printa a posição 0
                        [A]
                  
                         1  2  3| 4  5  6| 7  8  9|
                        [0][1][2][3][4][5][6][7][8]
                        [A][B][C][D][E][F][G][H][J]

                        n = 2;
                        i = 3 = (0 + n + 1);

                  2. Vez que entra no loop printa a posição 3
                        i = 3;

                         0  1  2  3
                        [A][ ][ ][D]

                        n = 2;
                        i = 6 = (3 + n + 1);
                   3. Vez que entra no loop printa a posição 6
                        i = 6 

                         0 |1  2  3 |4  5  6|
                        [A][ ][ ][D][ ][ ][G]

                        n = 2;
                        i = 9 = 6 + n + 1;

                    4. Vez que entra no loop printa a posição 9
                        i = 9

                         0 |1  2  3 |4  5  6 |7  8  9|
                        [A][ ][ ][D][ ][ ][G][ ][ ][J]


                        //informação jogada no lixo:
                        n = 2;
                        i = 12 = 9 + 2 + 1;
                 */


        }
        str[count] = '\0';

        return (str);
}

int ft_strlen(char *str)
{
        int i;

        i = 0;
        while(str[i] != '\0')
                i++;

        return (i);
}
