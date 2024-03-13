/*
    1. Elaborar um algoritmo que lê 3 valores a,b,c e os escreve. A seguir, encontre o 
    maior dos 3 valores e o escreva com a mensagem : "É o maior ".
*/
#include <stdio.h>

int main() {
    float a, b, c = 0;

    printf("Insira 3 valores: \n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    if (a >= c && a >= b) {
        printf("O valor %g eh o maior.\n", a);
    } else if (b >= c && b >= a) {
        printf("O valor %g eh o maior\n", b);
    } else {
        printf("o valor %g eh o maior\n", c);
    }

    return 0;
}