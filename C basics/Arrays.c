#include <stdio.h> //Printf e scanf
#include <stdbool.h> //Booleanos
#include <ctype.h> // Para a função tolower


int main() {

    int v[5];
    int i;
    //Pedindo dados do user para pereencher o vetor
    for(i=0;i<5;i++)
    {
        printf("Insira um dado: ");
        scanf("%i", &v[i]);
    }
    //Mostrando dados inseridos pelo user
    printf("Dados Inseridos: \n");
    for(i=0;i<5;i++)
    {
        printf("Indice %i: %i ", i, v[i]);
    }

    //int vetor[5] = {10, 20, 30, 40, 50};
    //int i;
    //float s = 0;

    //for(i = 0; i < 5; i++)
    //{
    //    s += vetor[i];
    //}
   // printf("Resultado: %.2f\n", s/5);

}
