#include <stdio.h> //Printf e scanf
#include <stdbool.h> //Booleanos
#include <ctype.h> // Para a fun��o tolower


int main() {

    char s[10];

    printf("Digite algo(scanf Convencional):\n");
    scanf("%s", s);//Nao precisa de &
    fflush(stdin);
    //Se o user der espa�o o resto corta
    printf("Resultado: %s\n\n", s);

    printf("Digite algo(scanf Aprimorado):\n");
    scanf("%9[^\n]s", s);//Limita a leitura at� 9 caracteres, j� que o ultimo tem que ser o \0
    fflush(stdin);
    //Aqui l� tudo que o user digitar at� precionar enter
    printf("Resultado: %s\n\n", s);


}

