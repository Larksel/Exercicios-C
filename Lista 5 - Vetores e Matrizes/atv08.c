/*
    8. Escreva um programa em C que calcule e imprima a soma de todos os elementos de uma 
    matriz 3x3 de inteiros.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 3

int main() {
    short i, j;
    int mat[N][N];
    int soma = 0;

    srand(time(NULL));
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            mat[i][j] = rand() % 10;

            soma += mat[i][j];

            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
    printf("A soma dos elementos eh: %d\n", soma);
    
    return 0;
}