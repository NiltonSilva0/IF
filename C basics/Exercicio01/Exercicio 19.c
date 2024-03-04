#include <stdio.h>

int main() {

    float comprimento, largura, area, potenciaIluminacao;

    printf("Digite o comprimento do cômodo em metros: ");
    scanf("%f", &comprimento);

    printf("Digite a largura do cômodo em metros: ");
    scanf("%f", &largura);

    area = comprimento * largura;

    potenciaIluminacao = area * 18;

    printf("A área do cômodo é: %.2f metros quadrados\n", area);
    printf("A potência de iluminação necessária é: %.2f Watts\n", potenciaIluminacao);

    return 0;
}
