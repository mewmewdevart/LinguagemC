#include <stdio.h>

int main (void)
{
        int x = 5;
        int *ptr_x; //ponteiro para x
        int **ptr_ptr_x; //ponteiro para ponteiro de x
        
        ptr_x = &x;
        ptr_ptr_x = &ptr_x;

        printf("x = %d \t\t &x = %ld\n", x ,&x);
        printf("ptr_x = %d \t &x = %ld\n", *ptr_x, ptr_x);
        printf("ptr_ptr_x = %d \t &x = %ld\n", **ptr_ptr_x, *ptr_ptr_x);
        return (0);
}
