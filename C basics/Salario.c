#include <stdio.h> //Printf e scanf
#include <stdbool.h> //Booleanos
#include <ctype.h> // Para a fun��o tolower


int main() {

    float salarioMinimo, salarioPessoa, qntSalarios;

    printf("Informe o valor do sal�rio m�nimo: \n");
    scanf("%f", &salarioMinimo);

    printf("Informe o sal�rio da pessoa: \n");
    scanf("%f", &salarioPessoa);

    qntSalarios = salarioPessoa / salarioMinimo;

    printf("Uma pessoa que recebe um sal�rio de %.2f reais, recebe %.1f sal�rios m�nimos \n",
           salarioPessoa, qntSalarios);
}
