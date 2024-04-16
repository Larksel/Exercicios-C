/*
  4. Faça um programa em C que verifique se um vetor de inteiros contém um determinado valor digitado pelo usuário.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

int main() {
  short i, cont = 0;
  int vet[N], alvo;

  printf("Digite o valor que deseja encontrar: ");
  scanf("%d", &alvo);

  for (i = 0; i < N; i++) {
    vet[i] = rand() % 51;

    printf("%d, ", vet[i]);

    if (vet[i] == alvo) {
      cont++;
    }
  }

  printf("\n\n");

  if (cont > 0) {
    printf("O numero %d foi encontrado no vetor.\n", alvo);
  } else {
    printf("O numero %d nao foi encontrado no vetor.\n", alvo);
  }
  
  return 0;
}