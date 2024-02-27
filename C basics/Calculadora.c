// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main() 
{
   
    while(true)
    {
        float num1, num2, total;
        char opcao;
        char resposta;
   
        printf("Calculadora!\n\n");
        printf("Insita o primeiro numero: ");
        scanf("%f", &num1);
        fflush(stdin);
        printf("Insita o segundo numero: ");
        scanf("%f", &num2);
        fflush(stdin);
    
        printf("Escolha a operação: + - * /\n");
        scanf("%s", &opcao);
        fflush(stdin);
    
        switch(opcao)
        {
        
        case '+':
            printf("A soma de %.2f + %.2f = %.2f\n\n", num1, num2, total = num1 + num2);
            break;
        case '-':
            printf("A subtração de %.2f - %.2f = %.2f\n\n", num1, num2, total = num1 - num2);
            break;
        case '*':
            printf("A multiplicação de %.2f * %.2f = %.2f\n\n", num1, num2, total = num1 * num2);
            break;
        case '/':
            if(num1 == 0)
            {
                printf("O zero não pode ser usado na divisão!");
            }else
            {
            printf("A divisão de %.2f / %.2f = %.2f\n\n", num1, num2, total = num1 / num2);
            break;
            }
        }
        printf("Gostaria de calcular outros números? S/N\n");
        scanf("%s", &resposta);
        fflush(stdin);
        resposta = tolower(resposta);
        
        if(resposta != 's')
        {
            printf("O programa encerrou!");
            break;
        }
    }
   
}