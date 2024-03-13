/*
    8. Escreva um algoritmo que leia três números inteiros e positivos (A, B, C) e
    mostre-os em ordem decrescente.
*/
#include <stdio.h>

int main() {
    short a, b, c = 0;

    printf("Digite tres numeros inteiros: ");
    scanf("%hd", &a);
    scanf("%hd", &b);
    scanf("%hd", &c);

    if (a >= b && a >= c) {
        if (b >= c) {
            printf("%hd, %hd, %hd", a, b, c);
        } else {
            printf("%hd, %hd, %hd", a, c, b);
        }
    } else if (b >= a && b >= c) {
        if (a >= c) {
            printf("%hd, %hd, %hd", b, a, c);
        } else {
            printf("%hd, %hd, %hd", b, c, a);
        }
    } else {
        if (a >= b) {
            printf("%hd, %hd, %hd", c, a, b);
        } else {
            printf("%hd, %hd, %hd", c, b, a);
        }
    }

    return 0;
}