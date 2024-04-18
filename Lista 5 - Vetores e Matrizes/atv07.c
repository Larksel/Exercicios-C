/*
    7. Preencha um vetor de 10 posições, ordene os valores em crescente e mostre ordenado na 
    tela.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main() {
    short i, j;
    int vet[N];

    srand(time(NULL));
    for (i = 0; i < N; i++) {
        vet[i] = rand() % 51;

        printf("%d ", vet[i]);
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N - 1; j++) {
            if (vet[j] > vet[j+1]) {
                int aux = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = aux;
            }    
        }
    }

    printf("\n\n");

    for (i = 0; i < N; i++) {
        printf("%d ", vet[i]);
    }

    return 0;
}