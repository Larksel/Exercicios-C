/*
    soma total por linha,
    soma total por coluna,
    média da diagonal principal,
    maior valor,
    valores da diagonal secundária
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 4

int main() {
    short i, j;
    int mat[N][N];
    int somaL, somaC;
    int maior = 0, somaDP = 0;

    srand(time(NULL));
    for (i = 0; i < N; i++) {
        somaL = 0;
        for (j = 0; j < N; j++) {
            mat[i][j] = rand() % 11;

            somaL += mat[i][j];

            if (i == j) {
                somaDP += mat[i][j];
            }

            if (maior < mat[i][j]) {
                maior = mat[i][j];
            }

            printf("%2d ", mat[i][j]);
        }

        printf("= %d\n", somaL);
    }

    printf("\n");

    printf("Soma por coluna: \n");
    for (j = 0; j < N; j++) {
        somaC = 0;
        for (i = 0; i < N; i++) {
            somaC += mat[i][j];
        }

        printf("- Coluna %d = %d\n", j+1, somaC);
    }

    printf("\n");

    printf("Media da DP: %g\n", (float) somaDP / N);
    printf("O maior valor foi: %d\n", maior);
    printf("Valores da diagonal secundaria: ");
    for (i = 0; i < N; i++) {
        printf("%d ", mat[N-1-i][i]);
    }
    
    return 0;
}
