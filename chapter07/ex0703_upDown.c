#include <stdio.h>

char *ft_upDown(char *str);
char ft_tolower(char ch); //check se é lower case
char ft_uppercase(char ch);

int main(void)
{
        char string[100] = "alternadamente";

        printf("%s", ft_upDown(string));
        return (0);
}

//Coloca os caracteres da string str alternadamente entre Maiuscula e Minuscula
char *ft_upDown(char *str)
{
        int i;

        i = 0;
        while(str[i] != '\0')
        {
                if(i%2==0)
                        str[i] = ft_tolower(str[i]);
                else
                        str[i] = ft_uppercase(str[i]);
                i++;
        }

        str[i] = '\0';
        return (str);
}

char ft_tolower(char ch)
{
        if (ch >= 'a' && ch <= 'z')
                ch = ch - 32;

        return (ch);
}

char ft_uppercase(char ch)
{
        if (ch >= 'A' && ch <= 'Z')
                ch = ch + 32;
        return (ch);
}
