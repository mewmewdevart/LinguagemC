#include <stdio.h>

#define DIM 3
#define ESPACO ' '

void inic(char s[][DIM]);
void mostra(char s[DIM][DIM]);

int main (void)
{
        char Velha[DIM][DIM];
        int posx, posy;
        char ch = '0'; //Caractere para jogar
        int n_jogadas = 0;

        inic(Velha);
        while (1) //Laço infinito
        {
                mostra(Velha);
                printf("\n Introduza a posição de jogo linha coluna: ");
                scanf("%d %d", &posx, &posy);
                posx--; posy--;
                if (Velha[posx][posy] == ESPACO) //casa livre
                        {
                                Velha[posx][posy] = ch = (ch == '0') ? 'X' : 'O';
                                n_jogadas++;
                        }
                else
                        printf("Posição já ocupada\n Jogue novamente!!!\n");
                if (n_jogadas==DIM*DIM)
                        break; //Acaba o programa
        }
        mostra(Velha);
        return (0);
}

void inic(char s[][DIM])
{
        int i, j;
        for (i=0; i < DIM; i++)
                for(j=0; j<DIM; j++)
                        s[i][j] = ESPACO;
}

void mostra(char s[DIM][DIM])
{
        int i, j;
        for(i=0; i < DIM; i++)
        {
                for (j=0; j < DIM; j++)
                        printf("%c %c", s[i][j], j==DIM-1?' ':'|');
                if (i!=DIM-1)
                        printf("\n---------\n");
                putchar('\n');
        }
}
