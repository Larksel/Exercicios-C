/*
    3. (DO WHILE) Escrever um algoritmo que leia uma quantidade desconhecida de 
    números e conte quantos deles estão nos seguintes intervalos: [0,25], [26,50], 
    [51,75] e [76,100]. A entrada de dados deve terminar quando for lido um número 
    negativo.
*/
#include <stdio.h>

int main() {
    short num = 0;
    short g1 = 0;
    short g2 = 0;
    short g3 = 0;
    short g4 = 0;

    do {
        printf("Digite um numero: ");
        scanf("%hd", &num);

        if (num < 0) break;

        if (num < 26) {
            g1++;
        } else if (num < 51) {
            g2++;
        } else if (num < 76) {
            g3++;
        } else if (num < 101) {
            g4++;
        }

    } while (num > -1);

    printf("%hd no intervalo [0, 25]\n", g1);
    printf("%hd no intervalo [26, 50]\n", g2);
    printf("%hd no intervalo [51, 75]\n", g3);
    printf("%hd no intervalo [76, 100]\n", g4);

    return 0;
}