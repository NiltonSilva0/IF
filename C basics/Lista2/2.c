#include <math.h>
#include <stdio.h>
#include <stdbool.h>

int
main ()
{
  int a;

    printf ("Insira o valor A: \n");
    scanf ("%d", &a);

    if(a % 2 == 0)
    {
        printf("O número é par!");
    }else
    printf("O número é impar!");
    
  return 0;
}
