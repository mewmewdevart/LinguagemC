#include <stdio.h>

char *ft_strrchr(char *str, char ch);

int main (void)
{
        char nome[100];
        char *sobrenome;

        printf("Introduza um nome: ");
        gets(nome);

        sobrenome = ft_strrchr(nome, ' ');

        if(sobrenome == NULL)
                sobrenome = nome;
        else
                sobrenome++;
        puts(sobrenome);
        return (0);
}

char *ft_strrchr(char *str, char ch)
{
        while(*str != '\0')
        {
                if(*str == ch)
                        return *(&str);
                str++;
        }
        return (NULL);
}
