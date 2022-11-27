#include <stdio.h>

int main (void)
{
        char civil;
        printf("Qual é o estado civil? ");
        scanf("%c", &civil);

        switch (civil)
        {
                case 'C' :
                case 'c' : printf("Casado!");
                           break;
                case 'S' :
                case 's' : printf("Solteiro!");
                           break;
                case 'D' :
                case 'd' : printf("Divorciado!");
                           break;
                case 'V' : 
                case 'v' : printf("Viuvo!");
                           break;
                default : printf("Estado civil incorreto!");
        }
        return (0);
}
