#include <stdio.h>

//0,1, 1, 2, 3, 5, 8, 13

int main() {
   
   int i, ant1, ant2, atual;
   ant1 = 1;
   ant2 = 0;
   
   printf("Série de Fibonacci (8 primeiros termos)\n");
   printf("%i", ant2);
   printf("%i", ant1);
 
   
   
   for(i=3; i<=8; i++)
   {
       atual = ant1 + ant2;
       printf("%i", atual);
       ant2 = ant1;
       ant1 = atual;
   }

    return 0;
}