#include <stdio.h>

//Troca de dois valores
int
main (void)
{
  int number1, number2, swap;
  printf ("Digite um numero: ");
  scanf ("%d", &number1);
  printf ("Digite outro numero: ");
  scanf ("%d", &number2);
  if (number1 > number2)
    {
      swap = number1;
      number1 = number2;
      number2 = swap;
    }
  printf ("%d %d\n", number1, number2);
  return (0);
}
