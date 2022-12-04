#include <stdio.h>

int main (void)
{
        char Nome[50];
        printf("Introduaza o nome completo: ");
        gets(Nome);
        printf("Nome completo: %s\n", Nome);
        return (0);
}
