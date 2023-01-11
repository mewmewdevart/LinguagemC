#include <stdio.h>

char *strdelUpper(char *str);
int ft_upper(char ch);

int main (void)
{
        char str[100] = "LArisAa";

        printf("%s", strdelUpper(str));
        return (0);
}

char *strdelUpper(char *str)
{
        char *ptr, *print;

        print = ptr = str;
        while(*str != '\0')
        {
                if(!ft_upper(*str))
                        *ptr++=*str;
                str++;
        }
        *ptr = '\0';
        return (print);
}

int ft_upper(char ch)
{
        if(ch >= 'A' && ch <= 'Z')
                return (1);
        return (0);
}
