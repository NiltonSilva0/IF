#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char nome[50];
    char sexo;

    printf("Digite o nome: ");
    scanf("%s", nome);

    printf("Digite o sexo (Masculino ou Feminino): ");
    scanf(" %c", &sexo);

    sexo = tolower(sexo); 

    if (sexo == 'm') {
        printf("Ilmo Sr. %s\n", nome);
    } else if (sexo == 'f') {
        printf("Ilma Sra. %s\n", nome);
    } else {
        printf("Sexo inválido.\n");
    }

    return 0;
}
