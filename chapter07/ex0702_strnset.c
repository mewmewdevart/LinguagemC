#include <stdio.h>

//Coloca o caractere ch apenas nas primeiras n posicoes da string str
//Se n ft_strlen(str) emtao n toma o valor de strlen(str)
char *ft_strnset(char *str, char ch, int n);
int ft_strlen(char *str);

int main (void)
{
        char string[25];
        char ch;
        int number;

        printf("Digite uma string: ");
        scanf(" %s", string);
        printf("Digite um caractere: ");
        scanf(" %c", &ch);
        printf("Digite a quantidade de numeros que serao substituidos: ");
        scanf("%d", &number);

        printf("A string exibida é : %s", ft_strnset(string, ch, number));
        return (0);
}

char *ft_strnset(char *str, char ch, int n)
{       int i;

        i = 0;

        if (n > ft_strlen(str))
                n = ft_strlen(str);
        
        while(str[i] != '\0')
        {
                if(i < n)
                        str[i] = ch;
                i++;
        }

        str[i] = '\0';
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
