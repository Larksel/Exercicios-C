/*
    6. Escreva um programa em C para calcular a soma dos números pares de 1 a 100.
*/
#include <stdio.h>

short verificarPar(int num);

int main() {
    int i, soma = 0;

    for (i = 1; i <= 100; i++) {
        if (verificarPar(i)) {
            soma += i;
        }
    }

    printf("A soma dos pares entre 1 e 100: %d\n", soma);
    
    return 0;
}

short verificarPar(int num) {
    if (num % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}