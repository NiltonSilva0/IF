#include <stdio.h> //Printf
#include <stdbool.h> //Booleanos
#include <ctype.h> // Para a fun��o tolower


int main() {

    int i;

    for(i=1; i<=10; i++)
    {
        if(i == 5)
        {
            continue;
        }
        printf("%i", i);
    }
}
