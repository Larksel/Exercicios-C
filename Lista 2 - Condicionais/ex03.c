/*
    3. Elabore um algoritmo que dada a idade de um nadador classifica-o em uma das 
    seguintes categorias: 
 
    infantil A =  5 -  7 anos
    infantil B =  8 - 10 anos
    juvenil  A = 11 - 13 anos
    juvenil  B = 14 - 17 anos
    adulto = maiores de 18 anos
*/

#include <stdio.h>

int main() {
    short idade;

    printf("Insira a idade do nadador: ");
    scanf("%hd", &idade);

    if (idade >= 5 && idade <= 7) {
        printf("Categoria infantil A\n");
    } else if (idade >= 8 && idade <= 10) {
        printf("Categoria infantil B\n");
    } else if (idade >= 11 && idade <= 13) {
        printf("Categoria juvenil A\n");
    } else if (idade >= 14 && idade <= 17) {
        printf("Categoria juvenil B\n");
    } else if (idade >= 18) {
        printf("Categoria adulto\n");
    } else {
        printf("Idade inválida ou baixa demais.\n");
    }

    return 0;
}