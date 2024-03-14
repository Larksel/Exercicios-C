/*
    10. Escrever um algoritmo que lê 10 valores, um de cada vez, e conta quantos deles 
    estão no intervalo [10,20] e quantos deles estão fora do intervalo, escrevendo estas 
    informações.
*/
#include <stdio.h>

int main() {
    short i;
    short num = 0;
    short dentro = 0;
    short fora = 0;

    for (i = 0; i < 10; i++) {
        printf("Insira um numero inteiro: ");
        scanf("%hd", &num);

        if (num < 10 || num > 20) {
            fora += 1;
        } else {
            dentro += 1;
        }
    }

    printf("Ha %hd numeros dentro do intervalo [10, 20] e %hd fora.", dentro, fora);

    return 0;
}