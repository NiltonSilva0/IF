#include <math.h>
#include <stdio.h>
#include <stdbool.h>

int
main ()
{
  int a;

    printf ("Insira o valor de 1 a 9: \n");
    scanf ("%d", &a);
    
    
    if(a >= 1 && a <= 9)
    {
        printf("O valor está na faixa permitida");
    }else
        printf("O valor está fora da faixa permitida");
    
  return 0;
}
