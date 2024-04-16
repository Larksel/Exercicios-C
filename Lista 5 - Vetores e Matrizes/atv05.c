/*
  5. Desenvolva um programa em C que receba um vetor de inteiros e substitua todos os valores negativos por zero.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

int main() {
  short i;
  int vet[N];

  srand(time(NULL));
  for (i = 0; i < N; i++) {
    vet[i] = (rand() % 21) - 10;

    printf("%2d -> ", vet[i]);

    if (vet[i] < 0) vet[i] = 0;

    printf("%2d\n", vet[i]);
  }
  
  return 0;
}