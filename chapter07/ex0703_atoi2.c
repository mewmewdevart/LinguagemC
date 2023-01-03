#include <stdio.h>

//Convert string to integer
int ft_atoi(const char *str);
//Check if character is a white-space
static int ft_isspace(int ch);
//Check if character is a digit 0 - 9
static int ft_isdigit(int ch);

int main (void)
{
        char str[100] = "73";
        int result;

        result = ft_atoi(str);
        printf("O valor inserido é : %d * 2 %d! \n", result, result * 2);

        return (0);
}

int ft_atoi(const char *str)
{
        int i;
        int sign;
        int res;

        i = 0;
        sign = 1;
        res = 0;
        while (ft_isspace(str[i]))
                i++;
        if (str[i] == '-' || str[i] == '+')
        {
                if (str[i] == '-')
                        sign = sign * -1;
                i++;
        }
        while(ft_isdigit(str[i]))
        {
                res = (res * 10) + (str[i] - '0');
                i++;
        }
        return (sign * res);
}

static int ft_isspace(int ch)
{
        //space, horizontal tab, newline, vertical tab, feed, carriage return
        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\v' || ch == '\f' || ch == '\r')
                return (1);
        return (0);
}

static int ft_isdigit(int ch)
{
        if (ch >= '0' && ch <= '9')
                return (1);
        return (0);
}
