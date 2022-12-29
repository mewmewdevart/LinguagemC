#include <stdio.h>

char *ft_strijset(char *str, int k, int j, char ch);

int main (void)
{
        char string[100] = "larissa";
        // 0  1  2  3  4  5  6 
        //[l][a][r][i][s][s][a]
        int k = 3;
        int j = 5;
        char ch = 'f';

        printf("%s", ft_strijset(string, k, j, ch));
        return (0);
}

//Coloca o caractere ch nas posicoes k..j na string str
char *ft_strijset(char *str, int k, int j, char ch)
{
        int i;

        i = 0;

        while(str[i] != '\0')
        {
                if (i >= k && i <= j)
                        str[i] = ch;
                i++;
        }
        str[i] = '\0';
        return (str);
}
