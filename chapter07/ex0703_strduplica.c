#include <stdio.h>

char *ft_strduplica(char *str);
int ft_strlen(char *str);

int main (void)
{
        char string[100] = "ana";

        printf("%s", ft_strduplica(string));
        return (0);
}

//Recebe uma string e duplica o seu conteudo;
char *ft_strduplica(char *str)
{
        int i;
        int len;

        i = 0;
        len = ft_strlen(str);
        while(i < len)
        {
                str[i+len] = str[i];
                i++;
        }
        str[i+len]= '\0';
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
