#include <stdio.h>

//Incremento
int main (void)
{
        int x = 5;
        int *px = &x;
        float y = 5.0;
        float *py = &y;

        //O ponteiro de px é incrementado em dois bytes (int)
        printf("%d %ld\n", x, (long) px);
        printf("%d %ld\n", x+1, (long) (px+1));

        //O ponteiro de py é incrementado em quatro bytes (float)
        printf("%f %ld\n", y, (long) py);
        printf("%f %ld\n", y+4, (long) (py+4));

        //O incremento no ponteiro descreve a quantidade de bytes que será avançado, se fosse +4 no float, o float iria avançar 4*4 = 16 bytes
}
