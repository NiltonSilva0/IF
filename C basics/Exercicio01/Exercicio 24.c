#include <stdio.h>

int main() {
    
    float dinheiroReais, dinheiroDolar, dinheiroMarco, dinheiroLibra;
    float cotacaoDolar = 1.80;
    float cotacaoMarco = 2.00;
    float cotacaoLibra = 1.57;

    printf("Digite o valor em reais que a pessoa possui: ");
    scanf("%f", &dinheiroReais);

    dinheiroDolar = dinheiroReais / cotacaoDolar;
    dinheiroMarco = dinheiroReais / cotacaoMarco;
    dinheiroLibra = dinheiroReais / cotacaoLibra;

    printf("O valor convertido para dólares é: %.2f\n", dinheiroDolar);
    printf("O valor convertido para marcos alemães é: %.2f\n", dinheiroMarco);
    printf("O valor convertido para libras esterlinas é: %.2f\n", dinheiroLibra);

    return 0;
}
