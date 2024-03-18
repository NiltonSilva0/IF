#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4;
    float media, novaMedia, notaExame;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4.0;
    
    if (media >= 7.0) {
        printf("O aluno foi aprovado com média %.2f.\n", media);
    } else {
        printf("Digite a nota do exame: ");
        scanf("%f", &notaExame);
        
        novaMedia = (media + notaExame) / 2.0;
        
        if (novaMedia >= 5.0) {
            printf("O aluno foi aprovado em exame com média %.2f.\n", novaMedia);
        } else {
            printf("O aluno não foi aprovado. Média final: %.2f.\n", novaMedia);
        }
    }

    return 0;
}
