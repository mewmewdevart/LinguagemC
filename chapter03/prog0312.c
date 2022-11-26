#include <stdio.h>

int main (void)
{
        char est_civil;
        printf("Digite a primeira letra do seu estado civil: ");
        scanf("%c", &est_civil);

        if (est_civil == 's' || est_civil == 'S')
                printf("Solteiro!");
        else
                if (est_civil=='v' || est_civil=='V')
                        printf("Viuvo!");
                else
                        if (est_civil=='c' || est_civil=='C')
                                printf("Casado!");
                        else
                                if (est_civil == 'd' || est_civil == 'D')
                                        printf("Divorciado!");
                                else
                                        printf("Estado civil invalido!\n");
        return (0);
}
