#include <stdio.h>

int main() {
    float salario_minimo, salario_funcionario, quantidade_salarios;

    printf("Digite o valor do salário mínimo: ");
    scanf("%f", &salario_minimo);

    printf("Digite o valor do salário do funcionário: ");
    scanf("%f", &salario_funcionario);

    quantidade_salarios = salario_funcionario / salario_minimo;

    printf("O funcionário recebe %.2f salários mínimos.\n", quantidade_salarios);

    return 0;
}
