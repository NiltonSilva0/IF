#include <stdio.h>

int main() {
    
    int anoNascimento, anoAtual;
    int idadeAnos, idadeMeses, idadeDias, idadeSemanas;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNascimento);

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    idadeAnos = anoAtual - anoNascimento;

    idadeMeses = idadeAnos * 12;

    idadeDias = idadeAnos * 365;

    idadeSemanas = idadeAnos * 52;

    printf("A idade dessa pessoa é: %d anos.\n", idadeAnos);
    printf("A idade dessa pessoa é: %d meses.\n", idadeMeses);
    printf("A idade dessa pessoa é: %d dias.\n", idadeDias);
    printf("A idade dessa pessoa é: %d semanas.\n", idadeSemanas);

    return 0;
}
