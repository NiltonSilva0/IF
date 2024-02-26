#include <stdio.h> //Printf
#include <stdbool.h> //Booleanos
#include <ctype.h> // Para a função tolower


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
