#include <stdio.h>

int ft_memicmp(char *s1, char *s2, int n);
char ft_toupper(char ch);

int main (void)
{
        printf("%d", ft_memicmp("abcd", "abcd", 2));
        return (0);
}

int ft_memicmp(char *s1, char *s2, int n)
{
        int i;

        i = 0;
        while(i < n)
        {
                if(ft_toupper(s1[i]) != ft_toupper(s2[i]))
                        return (0);
                i++;
        }
        return (1);
}

char ft_toupper(char ch)
{
        if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
                return (1);
        return(0);
}
