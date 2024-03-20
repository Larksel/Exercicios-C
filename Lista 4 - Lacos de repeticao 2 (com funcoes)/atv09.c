/*
    9. Faça um programa em C para calcular a potência de um número.
*/
#include <stdio.h>

long calcularPotencia(int num, int pot);

int main() {
    int num, pot;

    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("Digite a potencia: ");
    scanf("%d", &pot);

    long potencia = calcularPotencia(num, pot);
    
    if (potencia != 0) {
        printf("%d elevado a %d eh igual a: %ld", num, pot, potencia);
    } else {
        printf("A potencia deve ser positiva.\n");
    }
    
    return 0;
}

long calcularPotencia(int num, int pot) {
    int i;
    if (pot > 0) {
        long resultado = num;
    
        for (i = 1; i < pot; i++) {
            resultado *= num;
        }
    
        return resultado;
    } else if (pot == 0) {
        return 1;
    } else {
        return 0;
    }
}