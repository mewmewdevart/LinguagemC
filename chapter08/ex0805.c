#include <stdio.h>

char *first_vogal(char *str);

int main (void)
{
        char string[100] = "quero";

        printf("%s", first_vogal(string));
        return (0);
}

char *first_vogal(char *str)
{
        while(*str != '\0')
        {
                if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
                        return *(&str);
                str++;
        }
        return(NULL);
}
