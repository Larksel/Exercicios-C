/*
    10. Faça um algoritmo que leia a idade de uma pessoa expressa em dias e mostre-a 
    expressa em anos, meses e dias.
*/
#include <stdio.h>

int main() {
    int anos, meses, dias = 0;

    printf("Digite sua idade em dias: ");
    scanf("%d", &dias);

    anos = dias / 365;
    meses = (dias / 30) % 12;
    dias = dias % 30;

    printf("%d anos, %d meses e %d dias", anos, meses, dias);

    return 0;
}