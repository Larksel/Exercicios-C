/*
    9. Escrever um algoritmo que gera e escreve os números ímpares entre 100 e 200.
*/
#include <stdio.h>

int main() {
    short i;

    printf("Numeros impares entre 100 e 200: \n");

    for (i = 100; i < 201; i++) {
        if (i % 2 != 0) {
            printf("%hd \n", i);
        }
    }

    return 0;
}