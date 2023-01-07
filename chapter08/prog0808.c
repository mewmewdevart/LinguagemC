#include <stdio.h>

char *ft_strchr(char *str, char ch);

int main (void)
{
        char str[100];
        char ch;

        printf("Digite uma string: ");
        scanf("%s", str);

        printf("Digite um caractere para ser procurado dentro da string: ");
        scanf(" %c", &ch);

        printf("A partir do caractere %c na string %s encontra-se : %s\n", ch, str, ft_strchr(str, ch));
        return (0);
}

char *ft_strchr(char *str, char ch)
{
        while(*str != '\0')
        {
                if(*str == ch)
                        return (str);
                str++;
        }

        return (NULL);
}
