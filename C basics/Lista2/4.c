#include <math.h>
#include <stdio.h>
#include <stdbool.h>

int
main ()
{
  int a;

    printf ("Insira o valor A: \n");
    scanf ("%d", &a);
    
    
    if(a%3 == 0)
    {
        printf("O número %d é multiplo de 3", a);
    }else
        printf("O número %d não é multiplo de 3", a);
    
  return 0;
}
