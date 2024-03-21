/*
    10. Escreva um programa em C para imprimir uma pirâmide de números.
*/
#include <stdio.h>

void inserirEspacos(short num);
void criarPiramide(short linhas);
void inserirNumeros(short num);

int main() {
    short linhas;

    printf("Digite o número de linhas da pirâmide: ");
    scanf("%hd", &linhas);

    criarPiramide(linhas);
    
    return 0;
}

void criarPiramide(short linhas) {
    int i, contador = 1;

    for (i = linhas; i > 0; i--) {
        inserirEspacos(i - 1);

        // Printar numero
        inserirNumeros(contador);
        contador++;

        printf("\n");
    }
}

void inserirEspacos(short num) {
    int i;

    for (i = 0; i < num; i++){
        printf(" ");
    }
}

void inserirNumeros(short num) {
    int i;

    for (i = 0; i < (num * 2) - 1; i++) {
        printf("%hd", num);
    }
}