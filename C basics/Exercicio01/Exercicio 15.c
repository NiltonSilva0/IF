#include <stdio.h>

int main() {
    
    float salarioJoao, totalContas, totalComMulta, saldoRestante;

    printf("Digite o salário de João: ");
    scanf("%f", &salarioJoao);

    printf("Digite o total das contas atrasadas: ");
    scanf("%f", &totalContas);

    totalComMulta = totalContas * 1.02; 

    saldoRestante = salarioJoao - totalComMulta;

    printf("O saldo restante do salário de João após o pagamento das contas com multa é: %.2f\n", saldoRestante);

    return 0;
}
