#include <stdio.h>

int main() {
	
    int numeroLados, numeroDiagonais;

    printf("Digite o número de lados do polígono: ");
    scanf("%d", &numeroLados);

    numeroDiagonais = numeroLados * ((numeroLados - 3) / 2);

    printf("O número de diagonais do polígono é: %d\n", numeroDiagonais);

    return 0;
}
