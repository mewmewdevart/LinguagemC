#include <stdio.h>

int is_alfa_digit(char *str);

int main (void)
{
        char str[100] = "A1B2l";

        printf("%d", is_alfa_digit(str));
        return (0);
}

int is_alfa_digit(char *str)
{
        int i;
        int res;

        i = 0;
        res = 0;
        while(str[i] != '\0')
        {
                if(str[i] >= 'A' && str[i] <= 'Z' && str[i+1] >= '0' && str[i+1] <= '9')
                        res += 1;
                else
                        res = 0;
                i++;
        }
        if (res)
                return (1);
        return (0);
}
