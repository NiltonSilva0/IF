#include <math.h>
#include <stdio.h>
#include <stdbool.h>

int
main ()
{
  int a, b, c, soma;

    printf ("Insira o valor A: \n");
    scanf ("%d", &a);
    printf ("Insira o valor B: \n");
    scanf ("%d", &b);
    printf ("Insira o valor C: \n");
    scanf ("%d", &c);
    
    soma = a+b;

    if(soma < c)
    {
        printf("A soma de a+b = %d é menor que %d.", soma, c);
    }else
    printf("Não é menor!");
    
  return 0;
}
