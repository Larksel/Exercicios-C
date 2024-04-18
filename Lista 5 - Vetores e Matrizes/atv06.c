/*
    6. Escreva um programa em C que determine se um vetor de inteiros é simétrico, ou seja, se 
    ele é igual ao seu vetor invertido.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

int main() {
    short i;
    int vet[N], vetI[N];
    int cont = 0;
    
    srand(time(NULL));
    for (i = 0; i < N; i++){
        vet[i] = rand() % 2;

        vetI[N-i-1] = vet[i];
    }

    for (i = 0; i < N; i++) {
        if (vet[i] == vetI[i]) {
            cont++;
        }
        printf("%d - %d\n", vet[i], vetI[i]);
    }

    printf("\n\n");
    if (cont == 5) {
        printf("Eh um vetor simetrico.\n");
    } else {
        printf("Nao eh um vetor simetrico.\n");
    }

    return 0;
}