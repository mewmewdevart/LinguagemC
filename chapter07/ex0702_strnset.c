#include <stdio.h>

//Coloca o caractere ch apenas nas primeiras n posições da string str
char *ft_strnset(char *str, char ch, int n);
int ft_strlen(char *str);

int main (void)
{
        char str[] = "larissa";
        char ch = 'a';
        int number = 4; 

        //[0][1][2][3][4]
        //[l][a][r][i][s][s][a]

        printf("%s", ft_strnset(str, ch, number));
        return (0);
}

char *ft_strnset(char *str, char ch, int n)
{
        int i;
        int len;

        i = 0;
        len = ft_strlen(str);
        while (i < len)
        {
                if( i <= n )
                        str[i] = ch;
                i++;
        }

        str[i] = '\0';
        return(str);

}

int ft_strlen(char *str)
{
        int i;

        i = 0;
        while(str[i] != '\0')
                i++;
        return (i);
}
