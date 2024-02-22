#include <stdio.h>
#include <stdbool.h>
#include <ctype.h> // Para a função tolower


int main() {
    
    int i = 0;
    
    while(i <= 10)
    {
        printf("%i ", i);
        i++;
    }
    
    do
    {
        printf("%i ", i);
        i++;
    }while(i <= 10);
  
}