/*
    10. Desenvolva um programa em C que verifique se uma matriz 3x3 de inteiros é uma matriz 
    identidade.   
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 3

int main() {
    short i, j;
    int mat[N][N];
    int cont1 = 0, somaTotal = 0;

    srand(time(NULL));
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            mat[i][j] = rand() % 2;

            if (i == j && mat[i][j] == 1) {
                cont1++;
            }
            somaTotal += mat[i][j];

            printf("%2d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
    if (cont1 == N && somaTotal ==  N) {
        printf("Eh uma matriz identidade.\n");
    } else {
        printf("Nao eh uma matriz identidade.\n");
    }
    return 0;
}