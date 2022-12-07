#include <stdio.h>

int main (void)
{
        char str[25+1];

        printf("Digite uma frase de até 25 caracteres! ");
        gets(str); //por se tratar de uma string com espaço, é necessario usar o gets inves do scanf

        printf("%s",str);
        return(0);
}
