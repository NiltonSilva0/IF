#include <stdio.h>

int main() {

    float horasTrabalhadas, salarioMinimo, horasExtras;
    float valorHora, valorHoraExtra, salarioBruto, salarioExtras, salarioTotal;

    printf("Digite o número de horas trabalhadas: ");
    scanf("%f", &horasTrabalhadas);

    printf("Digite o valor do salário mínimo: ");
    scanf("%f", &salarioMinimo);

    printf("Digite o número de horas extras trabalhadas: ");
    scanf("%f", &horasExtras);

    valorHora = salarioMinimo / 8;
    valorHoraExtra = salarioMinimo / 4;

    salarioBruto = horasTrabalhadas * valorHora;
    salarioExtras = horasExtras * valorHoraExtra;

    salarioTotal = salarioBruto + salarioExtras;

    printf("O salário a receber é: R$ %.2f\n", salarioTotal);

    return 0;
}
