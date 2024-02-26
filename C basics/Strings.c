#include <stdio.h> //Printf e scanf
#include <stdbool.h> //Booleanos
#include <ctype.h> // Para a função tolower


int main() {

    char s[10];

    printf("Digite algo(scanf Convencional):\n");
    scanf("%s", s);//Nao precisa de &
    fflush(stdin);
    //Se o user der espaço o resto corta
    printf("Resultado: %s\n\n", s);

    printf("Digite algo(scanf Aprimorado):\n");
    scanf("%9[^\n]s", s);//Limita a leitura até 9 caracteres, já que o ultimo tem que ser o \0
    fflush(stdin);
    //Aqui lê tudo que o user digitar até precionar enter
    printf("Resultado: %s\n\n", s);


}

