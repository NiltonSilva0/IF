#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main() {
    
    float angulo, distancia, comprimentoEscada;

    printf("Digite o ângulo formado pela escada em graus: ");
    scanf("%f", &angulo);

    printf("Digite a distância da escada até a parede: ");
    scanf("%f", &distancia);

    // Converte para radianos
    float anguloRadianos = angulo * (PI / 180);

    // Calcular usando a função seno
    comprimentoEscada = distancia / sin(anguloRadianos);

    // Mostrar o comprimento da escada
    printf("O comprimento da escada necessário é: %.2f\n", comprimentoEscada);

    return 0;
}
