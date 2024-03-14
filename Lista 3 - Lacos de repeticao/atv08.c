/*
    8. Escrever um algoritmo que calcule e mostre a média aritmética dos números lidos 
    entre 13 e 73.
*/
#include <stdio.h>

int main() {
    short num;
    short cont = 0;
    int soma = 0;
    float media = 0;

    for (num = 0; num != -1;) {
        printf("Digite um numero (-1 encerra a leitura): ");
        scanf("%hd", &num);

        if (num > 12 && num < 74) {
            soma += num;
            cont++;
        }
    }

    if (cont > 0) {
        media = (float) soma / cont;

        printf("A media dos %hd valores digitados entre 13 e 73 eh %g", cont, media);
    } else {
        printf("Nenhum valor entre 13 e 73 foi digitado.");
    }

    return 0;
}