/*
    9. Faça um programa em C que encontre e imprima o maior elemento de uma matriz 3x3 de 
    inteiros.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 3

int main() {
    short i, j;
    int mat[N][N];
    int maior = 0;

    srand(time(NULL));
    for (i = 0; i < N; i++)  {
        for (j = 0; j < N; j++) {
            mat[i][j] = rand() % 51;

            if (maior < mat[i][j]) {
                maior = mat[i][j];
            }

            printf("%2d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
    printf("Maior valor encontrado: %d", maior);


    return 0;
}