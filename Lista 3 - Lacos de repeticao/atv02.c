/*
    2. (WHILE) Escreva um algoritmo que calcule a média dos números digitados pelo 
    usuário, se eles forem pares. Termine a leitura se o usuário digitar zero (0).
*/
#include <stdio.h>

int main() {
    short qnt = 0;
    short soma = 0;
    short num = -1;
    float media = 0;

    while (num != 0) {
        printf("Digite um numero: ");
        scanf("%hd", &num);
        
        if (num != 0 && num % 2 == 0) {
            soma += num;
            qnt += 1;
        }
    }

    media = (float) soma / qnt;

    printf("A media dos %hd numeros digitados eh %g", qnt, media);

    return 0;
}