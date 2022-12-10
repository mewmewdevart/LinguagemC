#include <stdio.h>

//devolve o nesimo caractere da string
char n_esimo(char *str, int n);

int main (void)
{
        printf("%c\n", n_esimo("EraUmaVez", 1));
        printf("%c\n", n_esimo("EraUmaVez", 3));
        return (0);
}

char n_esimo(char *str, int n)
{
        int i;
        char ch;

        i = 0;
        while(str[i] != '\0')
        {
                if(i == n)
                       ch = str[i - 1];
                i++;
        }
        return(ch);
}
