/*
    3. Crie um programa em C que verifique se um vetor de inteiros está 
    ordenado de forma crescente.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main() {
    short i, ordenado = 1;
    int vet[N], numAnterior = 0;

    srand(time(NULL));
    for (i = 0; i < N; i++) {
        vet[i] = rand() % 51;
        printf("%d, ", vet[i]);

        if (numAnterior > vet[i]) {
            ordenado = 0;
        }

        numAnterior = vet[i];
    }

    printf("\n\n");

    if (!ordenado) {
        printf("O vetor nao esta na ordem crescente.\n");
    } else {
        printf("O vetor esta na ordem crescente.\n");
    }

    return 0;
}