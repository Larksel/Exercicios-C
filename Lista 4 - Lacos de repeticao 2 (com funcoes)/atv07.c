/*
    7. Faça um programa em C para exibir os números ímpares de 1 a 50.
*/
#include <stdio.h>

short verificarImpar(int num);

int main() {
    int i;

    printf("Numeros impares entre 1 e 50\n");

    for (i = 1; i <= 50; i++) {
        if (verificarImpar(i)) {
            printf("Eh impar: %d\n", i);
        }
    }
    
    return 0;
}

short verificarImpar(int num) {
    if (!(num % 2 == 0)) {
        return 1;
    } else {
        return 0;
    }
}