#include <stdio.h>

int ft_stricmp(char *s1, char *s2);
char *ft_strlwr(char *str);
char *ft_strcpy(char *destiny, char *origin);

int main (void)
{
        char string1[25] = "larissa";
        char string2[25] = "LARISSA";

        ft_strlwr(string1);
        ft_strlwr(string2);

        printf("%d", ft_stricmp(string1, string2));
        return (0);
}

int ft_stricmp(char *s1, char *s2)
{
        int i;
        
        i = 0;
        while(s1[i] == s2[i] && s1[i] != '\0')
        {
                i++;
        }  
        return (s1[i] - s2[i]);
}

char *ft_strlwr(char *str)
{
        int i, count;

        i = 0;
        count = 0;
        while(str[i] != '\0')
        {
                if(str[i] >= 'A' && str[i] <= 'Z')
                        str[count] += 32;
                count++;
                i++;
        }
        str[count] = '\0';
        return (str);
}
