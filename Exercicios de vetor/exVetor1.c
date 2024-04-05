/*
    Média dos valores do vetor
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main() {
    int vet[N];
    short i;
    int soma = 0;

    printf("Media dos valores do vetor\n");

    srand(time(NULL));
    for (i = 0; i < N; i++) {
        vet[i] = rand() % 51;
    }

    for (i = 0; i < N; i++) {
        printf("%d, ", vet[i]);
        soma += vet[i];
    }

    float media = (float) soma / N;

    printf("\n");
    printf("A media dos valores eh: %g", media);

    return 0;
}