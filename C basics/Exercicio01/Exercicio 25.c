#include <stdio.h>

int main() {
    
    int hora, minutos, totalMinutos, totalSegundos;

    printf("Digite a hora: ");
    scanf("%d", &hora);
    printf("Digite os minutos: ");
    scanf("%d", &minutos);

    int horaEmMinutos = hora * 60;

    totalMinutos = horaEmMinutos + minutos;

    totalSegundos = totalMinutos * 60;

    printf("A hora digitada convertida em minutos é: %d\n", horaEmMinutos);
    printf("O total de minutos é: %d\n", totalMinutos);
    printf("O total de minutos convertidos em segundos é: %d\n", totalSegundos);

    return 0;
}
