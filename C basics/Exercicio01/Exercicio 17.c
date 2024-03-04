#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main() {
    
    float raio, comprimento, area, volume;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    comprimento = 2 * PI * raio;

    area = PI * raio;

    volume = (3.0 / 4.0) * PI * pow(raio, 3);

    printf("O comprimento da esfera é: %.2f\n", comprimento);
    printf("A área da esfera é: %.2f\n", area);
    printf("O volume da esfera é: %.2f\n", volume);

    return 0;
}
