/*
    Alternar entre A e B para guardar em C
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define N2 10

int main() {
    short i, indx = 0;
    int vetA[N], vetB[N], vetC[N2];

    srand(time(NULL));
    for (i = 0; i < N; i++) {
        vetA[i] = rand() % 51;
        vetB[i] = rand() % 51;
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

    printf("\n\n");

    printf("vetC: ");
    for (i = 0; i < N2; i++) {
        if (i % 2 == 0) {
            vetC[i] = vetA[indx];
        } else {
            vetC[i] = vetB[indx];
            indx++;
        }

        printf("%d, ", vetC[i]);
    }

    return 0;
}