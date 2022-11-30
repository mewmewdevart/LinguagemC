#include <stdio.h>

//verifica se as n primeiras posições dos vetores s1 e s2 sao ou nao iguais

int ft_memcmp(char *s1, char *s2, int n);

int main (void)
{
        char s1[] = "acc";
        char s2[] = "abc";
        int number = 3; //[0][1][2][3]

        printf("%d", ft_memcmp(s1, s2, number));
        return (0);
}

int ft_memcmp(char *s1, char *s2, int n)
{
        int i;

        i = 0;
        while(i < n)
        {
                if (s1[i] != s2[i])
                        return (0);
                i++;
        }
        return (1);
}

