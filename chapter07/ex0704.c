#include <stdio.h>
#include <string.h>

#define OP_SAIR "SAIR"

int ft_strlen(char *str)
{
        int i;

        i = 0;
        while(str[i] != '\0')
                i++;
        return (i);
}

int ft_strcountc(char *str, char ch)
{
        int i;
        int count;
        
        i = 0;
        count = 0;
        while(str[i] != '\0')
        {
                if(str[i] == ch)
                        count++;
                i++;
        }
        return (count);
}

char *ft_strrev(char *str)
{
        int i;
        int len;
        char swap;

        i = 0;
        len = ft_strlen(str)-1;
        while(i < len)
        {
                swap = str[i];
                str[i] = str[len];
                str[len] = swap;

                i++;
                len--;
        }
        return (str);
}
void ft_separa(char *nome, char *sobrenome)
{
        int i, j;

        if (ft_strcountc(Nome, ' ') == 0)//Existe apenas uma ou zero palavras no nome
        {
                sobrenome[0] = '\0';
                return (0);
        }

        //Existe uma garantia de que aja apenas um sobrenome
        i = ft_strlen(nome)-1;
        j = 0;
        while(nome[i] != ' ')
        {
                sobrenome[j++] = nome[i--];
        }

        sobrenome[j] = '\0';
        nome[i] = '\0';

        ft_strrev(sobrenome);
}

int main (void)
{
        char nome[100], sobrenome[20];

        while(1)
        {
                printf("Nome: ");
                gets(nome);

                if(stricmp(nome, OP_SAIR) == 0)
                        break;
                ft_separa(nome, sobrenome);
                printf("%s %s\n", wordupr(sobrenome), wordupr(nome));
        }
        return (0);
}
