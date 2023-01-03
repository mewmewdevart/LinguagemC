#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str); //converte string em inteiro
int ft_isdigit(char ch);

int main (void)
{
        char str[100] = "73";
        int result;

        result = ft_atoi(str);

        printf("O valor inserido é : %d * 2 é %d! \n", result, result*2);
        printf("%d", atoi(str));
        return (0);
}

int ft_atoi(char *str)
{
        int i;
        int sign;
        int res;

        i = 0;
        res = 0;
        sign = 1;
        if (str[0] == '-' || str[0] == '+')
                i = 1;
        if(str[0] == '-')
                sign = -1;

        while(ft_isdigit(str[i]))
        {
                res = res * 10 + str[i] - '0';
                i++;
        }
        return res*sign;
}

int ft_isdigit(char ch)
{
        if (ch >= '0' && ch <= '9')
                return (1);
        return (0);
}
