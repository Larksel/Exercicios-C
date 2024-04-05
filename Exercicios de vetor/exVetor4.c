/*
    Somar elementos de A com B e armazenar em C
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main() {
    short i;
    int vetA[N];
    int vetB[N];
    int vetC[N];

    printf("Somar elementos de A com B e armazenar em C\n");

    srand(time(NULL));
    for (i = 0; i < N; i++) {
        vetA[i] = rand() % 51;
        vetB[i] = rand() % 51;
        vetC[i] = vetA[i] + vetB[i];
    }

    printf("Vetor A: ");
    for (i = 0; i < N; i++) {
        printf("%d, ", vetA[i]);
    }

    printf("\n");
    printf("Vetor B: ");
    for (i = 0; i < N; i++) {
        printf("%d, ", vetB[i]);
    }

    printf("\n\n");
    printf("Vetor C: ");
    for (i = 0; i < N; i++) {
        printf("%d, ", vetC[i]);
    }


    
    return 0;
}