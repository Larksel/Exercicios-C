/*
    8. Escreva um programa em C para verificar se um ano fornecido pelo usuário é bissexto ou não.
*/
#include <stdio.h>

short verificarAnoBi(short ano);

int main() {
    short ano;

    printf("Digite um ano: ");
    scanf("%hd", &ano);

    if (verificarAnoBi(ano)) {
        printf("%hd eh um ano bissexto.", ano);
    } else {
        printf("%hd nao eh um ano bissexto.", ano);
    }
    
    return 0;
}

short verificarAnoBi(short ano) {
    if (ano % 100 == 0) {
        if (ano % 400 == 0) {
            return 1;
        } else {
            return 0;
        }
    } else {
        if (ano % 4 == 0) {
            return 1;
        } else {
            return 0;
        }
    }
}