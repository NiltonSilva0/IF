// Online C compiler to run C program online
#include <stdio.h>

//0,1, 1, 2, 3, 5, 8, 13

int main() {
   
   int i, ant1, ant2, atual;
   ant1 = 1;
   ant2 = 0;
   
   printf("Série de Fibonacci (8 primeiros termos: \n)");
   printf("%i", ant2);
   printf("%i", ant1);
   atual = ant1 + ant2; //Aqui já temos o terceiro termo
   printf("%i", atual);
   
   ant2 = ant1;
   ant1 = atual;
   atual = ant1 + ant2; //Aqui ja temos o quarto termo
   printf("%i", atual);
   
   ant2 = ant1;
   ant1 = atual;
   atual = ant1 + ant2; //Aqui ja temos o quinto termo
   printf("%i", atual);
   
   ant2 = ant1;
   ant1 = atual;
   atual = ant1 + ant2; //Aqui ja temos o sexto termo
   printf("%i", atual);
   
   ant2 = ant1;
   ant1 = atual;
   atual = ant1 + ant2; //Aqui ja temos o sétimo termo
   printf("%i", atual);
   
   ant2 = ant1;
   ant1 = atual;
   atual = ant1 + ant2; //Aqui ja temos o oitavo termo
   printf("%i", atual);
   
    
    return 0;
}