#include <stdio.h>

int main() {
    int valor1, valor2, valor3;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);
    printf("Digite o terceiro valor: ");
    scanf("%d", &valor3);

    // Maior valor
    int maior = valor1;
    if (valor2 > maior) {
        maior = valor2;
    } else if (valor3 > maior) {
        maior = valor3;
    }

    // Menor valor
    int menor = valor1;
    if (valor2 < menor) {
        menor = valor2;
    } else if (valor3 < menor) {
        menor = valor3;
    }

    // Valor do meio
    int meio = (valor1 + valor2 + valor3) - (maior + menor);

    // Ordem decrescente
    printf("Os valores em ordem decrescente são: %d, %d, %d\n", maior, meio, menor);

    return 0;
}
