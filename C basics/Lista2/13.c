#include <stdio.h>

int main() {
    int valores[5];
    int soma = 0;

    printf("Digite cinco valores:\n");
    for (int i = 0; i < 5; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);
        soma += valores[i];
    }

    float media = (float)soma / 5;

    printf("Os números superiores à média são:\n");
    int numerosSuperiores = 0;
    for (int i = 0; i < 5; i++) {
        if (valores[i] > media) {
            printf("%d\n", valores[i]);
            numerosSuperiores++;
        }
    }

    if (numerosSuperiores == 0) {
        printf("Nenhum número superior à média.\n");
    }

    return 0;
}
