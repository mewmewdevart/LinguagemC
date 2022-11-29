#include <stdio.h>

char *ft_memset(char *str, char ch, int n);

int main (void)
{
        char str[] = {"Troca tudo aqui dentro!"};
        char ch = 'a';
        int number = 3;

        printf("%s", ft_memset(str, ch, number));
        return (0);
}

char *ft_memset(char *str, char ch, int n)
{
        int i;

        i = 0;
        while(i < n)
        {
                str[i] = ch;
                i++;
        }
        return (str);
}
