/*
    1. Faça um programa em C que conte quantos elementos pares existem em um 
    vetor de inteiros.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main() {
    short i, qntPares = 0;
    int vet[N];

    srand(time(NULL));
    for (i = 0; i < N; i++) {
        vet[i] = rand() % 51;
        printf("%d, ", vet[i]);

        if (vet[i] % 2 == 0) {
            qntPares++;
        }
    }

    printf("\n");
    printf("Quantidade de pares: %d", qntPares);

    return 0;
}