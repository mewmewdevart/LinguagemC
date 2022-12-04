#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
        int i;

        i = 0;
        while (s1[i] == s2[i] && s1[i] != '\0')
                i++;
        return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
int main (void)
{
        char nome[30 + 1];

        do
        {
                printf("Nome: ");
                gets(nome);
                printf("Bem vinda! %s\n", nome);
        }
        while(ft_strcmp(nome, "SAIR"));
        puts("Terminou o programa");
        return (0);
}
