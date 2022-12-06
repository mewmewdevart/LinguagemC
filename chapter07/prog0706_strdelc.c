#include <stdio.h>

//apaga todas as ocorrencias do caractere ch na string str
char *ft_strdelc(char *str, char ch);

int main (void)
{
        char str[] = "larissa";
        char ch = 'a';

        printf("%s", ft_strdelc(str, ch));
        return (0);
}

char *ft_strdelc(char *str, char ch)
{
        int i;
        int j;

        i = 0;
        j = 0;
        while(str[i] != '\0')
        {
                if(str[i] != ch)
                        str[j++] = str[i];
                i++;
        }
        str[j] = '\0';
        return(str);
}
