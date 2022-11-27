#include <stdio.h>

int main (void)
{
        int num1, num2, rest;
        char op;
        printf("Escreva uma operação matematica: ");
        scanf("%d %c %d", &num1, &op, &num2);

        switch (op)
        {
                case '-' : rest = num1 - num2;
                           break;
                case '+' : rest = num1 + num2;
                           break;
                case '*' :
                case 'x' :
                case 'X' : rest = num1 * num2;
                           break;
                case '/' :
                case '\\' :
                case ':' : rest = num1 / num2;
        }

        printf("%d %c %d = %d", num1, op, num2, rest);
        return (0);
}
