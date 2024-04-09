/*
    Inverter A em B
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main() {
    short i, posB = N - 1;
    int vetA[N], vetB[N];
    
    srand(time(NULL));
    for (i = 0; i < N; i++) {
        vetA[i] = rand() % 51;
        vetB[posB] = vetA[i];
        posB--;
    }

    printf("vetA: ");
    for (i = 0; i < N; i++) {
        printf("%d, ", vetA[i]);
    }

    printf("\n");

    printf("vetB: ");
    for (i = 0; i < N; i++) {
        printf("%d, ", vetB[i]);
    }


    return 0;
}