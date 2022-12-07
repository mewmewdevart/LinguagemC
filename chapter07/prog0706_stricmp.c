#include <stdio.h>

int ft_stricmp(char *s1, char *s2);
char ft_abc(char ch);

int main (void)
{
        char s1[25] = "larissa";
        char s2[25] = "LARISSA";

        printf("%d", ft_stricmp(s1, s2));
        return (0);
}

int     ft_stricmp(char *s1, char *s2)
{
        int i;

        i = 0;
        while(s2[i] != '\0' && s1[i] != s2[i])
                i++;

        return (ft_abc(s1[i]) - ft_abc(s2[i]));
}

char ft_abc(char ch)
{
        if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
                return(1);
        return(0);
}
