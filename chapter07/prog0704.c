#include <stdio.h>

int main (void)
{
        char nome[20];
        while(1)
        {
                printf("Digite o seu nome: ");
                gets(nome);

                if (nome[0] == '\0')
                        break;
                else
                        printf("Nome: %s\n", nome);
        }
        return (0);
}
