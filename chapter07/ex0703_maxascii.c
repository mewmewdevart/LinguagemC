#include <stdio.h>

char ft_maxascii(char *str);

int main (void)
{
        char string[100] = "larissa";

        printf("%c", ft_maxascii(string));
        return (0);
}

//Devolve o caractere com maior codigo ASCII presente na string str. Se a string estiver vazia, devolve '\0
char ft_maxascii(char *str)
{
        int i;
        char res='\0'; //menor codigo ascii

        i = 0;
        while(str[i] != '\0')
        {
                res = res > str[i] ? res : str[i];
                i++;
        }
        return (res);
}
