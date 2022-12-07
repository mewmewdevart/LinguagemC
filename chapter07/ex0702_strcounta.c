#include <stdio.h>

int ft_strcounta(char *str);

int main (void)
{
        printf("%d", ft_strcounta("10 alarissa 10"));
        return (0);
}

int ft_strcounta(char *str)
{
        int i;
        int count;

        i = 0;
        count = 0;
        while(str[i] != '\0')
        {
                if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
                        count++;
                i++;
        }
        return (count);
}
