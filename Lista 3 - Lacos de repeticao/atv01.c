/*
    1. (WHILE) Escreva um algoritmo que calcule a média aritmética das 3 notas dos alunos 
    de uma classe. O algoritmo deverá ler, além das notas, o código do aluno e deverá ser 
    encerrado quando o código for igual a zero.
*/

#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media = 0;
    short cod = -1;


    while (cod != 0) {
        printf("Digite o codigo do aluno: ");
        scanf("%hd", &cod);

        if (cod != 0) {
            printf("Digite a primeira nota: ");
            scanf("%f", &nota1);
            printf("Digite a segunda nota: ");
            scanf("%f", &nota2);
            printf("Digite a terceira nota: ");
            scanf("%f", &nota3);

            media = (nota1 + nota2 + nota3) / 3;

            printf("A media do aluno %hd eh %.2f\n", cod, media);
        }
    }

    return 0;
}