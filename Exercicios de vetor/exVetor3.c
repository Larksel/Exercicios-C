/*
    Tabuada de cada numero do vetor
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

void mostrarTabuada(int num);

int main() {
    short i;
    int vet[N];

    printf("Tabuada de cada numero do vetor\n");

    srand(time(NULL));
    for (i = 0; i < N; i++) {
        vet[i] = rand() % 51;

        printf("%d, ", vet[i]);
    }

    for (i = 0; i < N; i++) {
        mostrarTabuada(vet[i]);
    }
    
    return 0;
}

void mostrarTabuada(int num) {
    short i;

    printf("\n\n");
    printf("===== Tabuada do %d =====\n", num);

    for (i = 1; i <= 10; i++) {
        printf("%2d x %2d = %4d\n", num, i, num*i);
    }
}
