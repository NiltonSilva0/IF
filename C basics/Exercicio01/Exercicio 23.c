#include <stdio.h>

int main() {

    float angulo1, angulo2, angulo3;

    printf("Digite a medida do primeiro ângulo: ");
    scanf("%f", &angulo1);

    printf("Digite a medida do segundo ângulo: ");
    scanf("%f", &angulo2);

    angulo3 = 180 - angulo1 - angulo2;

    printf("A medida do terceiro ângulo é: %.2f graus\n", angulo3);

    return 0;
}
