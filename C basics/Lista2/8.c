#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sexo[20]; 
    float altura, peso_ideal;

    printf("Digite o sexo (Masculino ou Feminino): ");
    scanf("%s", sexo);

    //iterando e convertendo cada letra da string
    for (int i = 0; sexo[i]; i++) {
        sexo[i] = tolower(sexo[i]);
    }

    printf("Digite a altura em metros: ");
    scanf("%f", &altura);

    if (strcmp(sexo, "masculino") == 0) { 
        peso_ideal = (72.7 * altura) - 58;
        printf("O peso ideal para um homem com altura %.2f metros é %.2f kg.\n", altura, peso_ideal);
    } else if (strcmp(sexo, "feminino") == 0) { // Comparando strings usando strcmp
        peso_ideal = (62.1 * altura) - 44.7;
        printf("O peso ideal para uma mulher com altura %.2f metros é %.2f kg.\n", altura, peso_ideal);
    } else {
        printf("Sexo inválido.\n");
    }

    return 0;
}
