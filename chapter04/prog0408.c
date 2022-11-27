#include <stdio.h>

int main (void)
{
        char op;
        do
        {
                printf("\t M E N U    P R I N C I P A L\n");
                printf("\n\n\n\t Clientes");
                printf("\n\n\n\t Fornecedores");
                printf("\n\n\n\t Encomendas");
                printf("\n\n\n\t Sair");
                printf("\n\n\n\t\t Opção : ");
                scanf(" %c", &op);
                fflush(stdin); //limpar o buffer

                switch (op)
                {
                        case 'c' :
                        case 'C' : puts("Opcao clientes!");
                                   break;
                        case 'f' :
                        case 'F' : puts("Opcao fornecedores!");
                                   break;
                        case 'e' : 
                        case 'E' : puts("Opcao encomendas! ");
                                   break;
                        case 's' :
                        case 'S' : break;
                        default : puts("Opcao invalida! ");
                }
                getchar(); //parar a tela
        }
        while (op != 's' && op !='S');
        return (0);
}
