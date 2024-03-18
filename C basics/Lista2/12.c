#include <stdio.h>

int main() {
    int valor1, valor2, valor3;
    int maior, menor;

   
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);
    printf("Digite o terceiro valor: ");
    scanf("%d", &valor3);

    // Passa o valor 1 para maior e menor
    maior = menor = valor1;

    
    if (valor2 > maior) {
        maior = valor2;
    } else if (valor2 < menor) {
        menor = valor2;
    }

    
    if (valor3 > maior) {
        maior = valor3;
    } else if (valor3 < menor) {
        menor = valor3;
    }

   
    printf("O maior valor é: %d\n", maior);
    printf("O menor valor é: %d\n", menor);

    return 0;
}
