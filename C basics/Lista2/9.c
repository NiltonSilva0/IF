#include <stdio.h>
#include <time.h>

int main() {
    int ano_nascimento;
    int idade;
    int ano_atual = 0;

    // Pegar o ano atual
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    ano_atual = tm.tm_year + 1900;

    
    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano_nascimento);

    
    idade = ano_atual - ano_nascimento;

    
    if (idade >= 16) {
        printf("Você tem %d anos e já pode votar.\n", idade);
    } else {
        printf("Você tem %d anos e ainda não pode votar.\n", idade);
    }

    if (idade >= 18) {
        printf("Você tem %d anos e já pode obter a Carteira de Habilitação.\n", idade);
    } else {
        printf("Você tem %d anos e ainda não pode obter a Carteira de Habilitação.\n", idade);
    }

    return 0;
}
