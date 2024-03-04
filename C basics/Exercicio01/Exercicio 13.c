#include <stdio.h>

int main() {
    
    int num, taboada;
    int i;

    printf("Digite o número que deseja a taboada: ");
    scanf("%i", &num);

    for(i=1;i<=10;i++)
    {
        taboada = num * i;
        printf("A taboada de %i é: %i x %i = %i\n", num, num, i, taboada);
    }

    return 0;
}
