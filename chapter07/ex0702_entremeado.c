#include <stdio.h>

char *ft_entremeado(char *str, int n);
int ft_strlen(char *str);

int main (void)
{
        char str[30] = "ABCDEFGHIJKLMN";
        int number = 3;

        printf("%s", ft_entremeado(str, number));
        return (0);
}

char *ft_entremeado(char *str, int n)
{
        int i, j, len;


        len = ft_strlen(str);
        if (n == 0)
                return (str);

        j = i = 0;
        while(i < len) //i menor que len? 
        {
                str[j++] = str[i]; // 2) o resultado é somado e aplicado no str[i] que em seguida envia as novas posições para o str[j++] que anda uma posição logo em seguida
                i += n+1; // 1) i = i + n + 1; 
        }
        str[j] = '\0';
        return (str);
}

int ft_strlen(char *str)
{
        int i;

        i = 0;
        while(str[i] != '\0')
                i++;
        return (i);
}
