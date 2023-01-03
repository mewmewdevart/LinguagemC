#include <stdio.h>

char *ft_lowerUpper(char *str);
int ft_strlen(char *str);
int ft_islower(char ch)
{
        if (ch >= 'a' && ch <= 'z')
                return (1);
        return(0);
}

int ft_isupper(char ch)
{
        if(ch >= 'A' && ch <= 'Z')
                return (1);
        return (0);
}

int main(void)
{
        char str[100] = "EraUmaVezUMCavalo";

        printf ("%s", ft_lowerUpper(str));
        return (0);
}

char *ft_lowerUpper(char *str)
{
        int i;
        int len;
        int check_troca;
        char tmp; //auxilia na realizacao da troca de caracteres

        check_troca = 1;
        len = ft_strlen(str);

        while(check_troca)
        {
                check_troca = 0;
                i = 0;
                while(i < len-1)
                {
                        if(ft_isupper(str[i]) && ft_islower(str[i+1]))
                        {
                                tmp = str[i];
                                str[i] = str[i+1];
                                str[i+1] = tmp;
                                check_troca = 1;
                        }
                        i++;
                }
        }

        return (str);
}

int ft_strlen(char *str)
{
        int i;
        
        i = 0;
        while(str[i] != '\0')
                i++;
        return i;
}
