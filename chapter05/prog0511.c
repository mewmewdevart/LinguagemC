#include <stdio.h>

char ft_istoupper(char ch);

int main (void)
{
        char letter;
        printf("Digite uma letra minuscula: ");
        scanf("%c", &letter);

        printf("%c", ft_istoupper(letter));
        return (0);
}

char ft_istoupper(char ch)
{
        if (ch >= 'a' && ch <= 'z')
                ch -= 32;

        return (ch);
}
