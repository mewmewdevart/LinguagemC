#include <stdio.h>

int ft_strlen(char *str);
char *strdelStr(char *s1, char *s2);
char *ft_strcpy(char *dest, char *orig);
char *ft_strstr(char *str, char *to_find);

int main (void)
{
        char s1[100] = "O rato roeu a roupa de rum do rei da Russia";
        char s2[100] = "ra";

        printf("%s", strdelStr(s1, s2));
        return (0);
}

char *strdelStr(char *s1, char *s2)
{
        char *check = ft_strstr(s1, s2);

        if (check != NULL) //Se s2 existir em s1
                ft_strcpy(check, check+ft_strlen(s2));
        return (s1);
}

char *ft_strcpy(char *dest, char *orig)
{
        char *tmp = dest;

        while(*dest = *orig)
        {
                dest++;
                orig++;
        }
        return (tmp);
}

char *ft_strstr(char *str, char *to_find)
{
        int i;
        int j;

        i = 0;
        if(to_find[0] == '\0')
                return ((char *)str);
        while(str[i] != '\0')
        {
                j = 0;
                while (str[i + j] == to_find[j] && str[i + j] != '\0')
                {
                        if (to_find[j + 1] == '\0')
                                return ((char *)&str[i]);
                        j++;
                }
                i++;
        }
        return (NULL);

}

int ft_strlen(char *str)
{
        char *ptr = str;

        while(*str)
                str++;
        return ((int)(str-ptr));
}
