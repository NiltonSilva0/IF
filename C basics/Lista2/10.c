#include <stdio.h>

int main() {
    float horasProfessor1, horasProfessor2;
    float valorHoraProfessor1, valorHoraProfessor2;
    float salarioTotalProfessor1, salarioTotalProfessor2;

    printf("Digite a quantidade de horas/aula do Professor 1: ");
    scanf("%f", &horasProfessor1);
    printf("Digite o valor por hora do Professor 1: ");
    scanf("%f", &valorHoraProfessor1);

    printf("Digite a quantidade de horas/aula do Professor 2: ");
    scanf("%f", &horasProfessor2);
    printf("Digite o valor por hora do Professor 2: ");
    scanf("%f", &valorHoraProfessor2);

    salarioTotalProfessor1 = horasProfessor1 * valorHoraProfessor1;
    salarioTotalProfessor2 = horasProfessor2 * valorHoraProfessor2;

    if (salarioTotalProfessor1 > salarioTotalProfessor2) {
        printf("O Professor 1 tem salário total maior: %.2f.\n", salarioTotalProfessor1);
    } else if (salarioTotalProfessor1 < salarioTotalProfessor2) {
        printf("O Professor 2 tem salário total maior: %.2f.\n", salarioTotalProfessor2);
    } else {
        printf("Os dois professores têm o mesmo salário total: %.2f.\n", salarioTotalProfessor1);
    }

    return 0;
}
