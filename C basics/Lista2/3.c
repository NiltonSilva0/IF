#include <math.h>
#include <stdio.h>
#include <stdbool.h>

int
main ()
{
  int a, b, soma, multiplicacao;

    printf ("Insira o valor A: \n");
    scanf ("%d", &a);
    printf ("Insira o valor A: \n");
    scanf ("%d", &b);
    soma = a+b;
    multiplicacao = a*b;
    
    if(a == b)
    {
        printf("A soma de a+b = %d", soma);
    }else
        printf("A multiplicação de axb = %d", multiplicacao);
    
  return 0;
}
