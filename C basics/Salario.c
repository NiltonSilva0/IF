#include <stdio.h> //Printf e scanf
#include <stdbool.h> //Booleanos
#include <ctype.h> // Para a função tolower


int main() {

    float salarioMinimo, salarioPessoa, qntSalarios;

    printf("Informe o valor do salário mínimo: \n");
    scanf("%f", &salarioMinimo);

    printf("Informe o salário da pessoa: \n");
    scanf("%f", &salarioPessoa);

    qntSalarios = salarioPessoa / salarioMinimo;

    printf("Uma pessoa que recebe um salário de %.2f reais, recebe %.1f salários mínimos \n",
           salarioPessoa, qntSalarios);
}
