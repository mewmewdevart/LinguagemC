#include <stdio.h>

#define DIM 20
#define SEP_NOME ", "

int ft_strlen(char *str);
char *ft_strcat(char *dest, char *orig);
char *ft_strcpy(char *dest, char *orig);

int main (void)
{
        char nome[DIM+1];
        char sobrenome[DIM+1];
        char completo[2*DIM+1];

        while(1)
        {
                printf("Nome: ");
                gets(nome);

                if (ft_strlen(nome) == 0)
                        break;

                printf("Sobrenome: ");
                gets(sobrenome);

                ft_strcpy(completo, sobrenome); //copia sobrenome
                ft_strcat(completo, SEP_NOME); //junta separador
                ft_strcat(completo, nome); //junta primeiro nome
                printf("Nome completo: %s\n", completo);
        }
        return (0);
}

int ft_strlen(char *str)
{
        int i;

        i = 0;
        while(str[i])
                i++;
        return(i);
}

char *ft_strcat(char *dest, char *orig)
{
        int i;
        int len;

        i = 0;
        len = ft_strlen(dest);
        while(dest[len + i] = orig[i])
                i++;

        return(dest);
}

char *ft_strcpy(char *dest, char *orig)
{
        int i;

        i = 0;
        while(orig[i])
        {
                dest[i] = orig[i];
                i++;
        }
        return (dest);
}
