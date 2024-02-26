#include <stdio.h>   //Printf e scanf
#include <stdbool.h> //Booleanos
#include <ctype.h>   // Para a função tolower

int main()
{

    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i, i2;

    printf("Imprimindo a primeira linha: \n");
    for (i2 = 0; i2 < 3; i2++)
    {
        printf("%i", matriz[0][i2]);
    }

    printf("\n\nImprimindo a matriz toda: \n");

    for (i = 0; i < 3; i++)
    {
        for (i2 = 0; i2 < 3; i2++)
        {
            printf("%i ", matriz[i][i2]);
        }
        printf("\n");
    }

    // int matriz[3][3];
    // linha esquerda - coluna direita

    // matriz[0][0] = 1;
    // matriz[0][1] = 2;
    // matriz[0][2] = 3;

    // matriz[1][0] = 4;
    // matriz[1][1] = 5;
    // matriz[1][2] = 6;

    // matriz[2][0] = 7;
    // matriz[2][1] = 8;
    // matriz[2][2] = 9;

    // printf("Imprimindo a primeira linha: \n");
    // printf("%i %i %i\n",  matriz[0][0], matriz[0][1], matriz[0][2]);
}
