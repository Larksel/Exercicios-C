/*
    2. Elaborar um algoritmo que lê 2 valores a e b e os escreve com a mensagem: 
    "São múltiplos" ou "Não são múltiplos".
*/
#include <stdio.h>

int main() {
    short a, b = 0;

    printf("Insira dois valores: \n");
    scanf("%hd", &a);
    scanf("%hd", &b);

    if (a % b == 0 || b % a == 0) {
        printf("Sao multiplos.");
    } else {
        printf("Nao sao multiplos");
    }

    return 0;
}