#include <stdio.h>

int ft_stricmp(char *s1, char *s2);
char *ft_strlower(char *str);

int main (void)
{
        char s1[25] = "larissa";
        char s2[25] = "LARISSA";
        int ret;

        ft_strlower(s1);
        ft_strlower(s2);

        ret = ft_stricmp(s1, s2);

        if(ret < 0)
                printf("O vetor s1 < 0! \n");
        else if(ret > 0) 
                printf("O vetor s2 > 0! \n");
        else
                printf("Os vetores s1 e s2 são iguais! \n");
        return (0);
}

int ft_stricmp(char *s1, char *s2)
{
        int i;

        i = 0;
        while(s1[i] == s2[i] && s1[i] != '\0')
                i++;
        return((unsigned char)s1[i] - (unsigned char)s2[i]);
}

char *ft_strlower(char *str)
{
        int i;

        i = 0;
        while(str[i] != '\0')
        {
                if (str[i] >= 'A' && str[i] <= 'Z')
                        str[i] += 32;
                i++;
        }

        return (str);
}
