/*
    Encontrar maior e menor valor do vetor
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main() {
    short i;
    int vet[N];

    printf("Encontrar maior e menor valor do vetor\n");

    srand(time(NULL));
    for (i = 0; i < N; i++) {
        vet[i] = rand() % 51;

        printf("%d, ", vet[i]);
    }

    int maior = vet[0], menor = vet[0];

    for (i = 0; i < N; i++) {
        short num = vet[i];
        if (num > maior) {
            maior = num;
        }
        if (num < menor) {
            menor = num;
        }
    }

    printf("\n");
    printf("O maior valor foi %d\n", maior);
    printf("O menor valor foi %d\n", menor);

    return 0;
}