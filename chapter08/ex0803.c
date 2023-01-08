#include <stdio.h>

char *ft_strrchr(char *str, char ch);

int main (void)
{
        char nome[100] = "larissa";
        char ch = 'a';
        char *string;

        string = ft_strrchr(nome, ch);

        printf("%s\n", string);
        return (0);
}

char *ft_strrchr(char *str, char ch)

{
        while(*str != '\0')
        {
                if(*str == ch)
                        return *(&str);
                else
                        str++;
        }
        return (NULL);
}
