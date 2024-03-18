#include <stdio.h>

int main() {
    float valor1, valor2;
    int opcao;

    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);

    printf("Menu:\n");
    printf("1 - Adição\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("Escolha uma operação: ");
    scanf("%d", &opcao);

    while (opcao < 1 || opcao > 4) {
        printf("Opção inválida. Escolha uma operação válida (1 a 4): ");
        scanf("%d", &opcao);
    }

    switch(opcao) {
        case 1:
            printf("Resultado da adição: %.2f\n", valor1 + valor2);
            break;
        case 2:
            printf("Resultado da subtração: %.2f\n", valor1 - valor2);
            break;
        case 3:
            printf("Resultado da multiplicação: %.2f\n", valor1 * valor2);
            break;
        case 4:
            if (valor2 == 0) {
                printf("Divisão por zero não é permitida.\n");
            } else {
                printf("Resultado da divisão: %.2f\n", valor1 / valor2);
            }
            break;
    }

    return 0;
}
