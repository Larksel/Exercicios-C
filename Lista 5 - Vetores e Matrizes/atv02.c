/*
  2. Desenvolva um programa em C que receba dois vetores de inteiros de mesmo tamanho e calcule o produto escalar entre eles.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

int main() {
  short i;
  int vetA[N], vetB[N], produto = 0;

  srand(time(NULL));
  for(i = 0; i < N; i++) {
    vetA[i] = rand() % 51;
    vetB[i] = rand() % 51;

    produto += vetA[i] * vetB[i];

    printf("%2d - %2d = %4d\n", vetA[i], vetB[i], vetA[i] * vetB[i]);
  }

  printf("\n\n");

  printf("O produto escalar dos vetores é: %d", produto);

  return 0;
}