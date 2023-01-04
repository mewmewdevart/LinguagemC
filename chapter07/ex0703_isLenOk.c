#include <stdio.h>

//Verifica se o comprimento da string é igual ao valor que é enviado a funcao
int is_lenOK(char *str, int number);

int main(void)
{
        char str[100] = "OLA";
        int number = 3;

        printf("%d", is_lenOK(str, number));
        return (0);
}

int is_lenOK(char *str, int number)
{
        int i;

        i = 0;
        if(str[i] != '\0')
                i++;      //0 1 2
        if(i == number-1) //[][][]
                return(1);
        return(0);
}
