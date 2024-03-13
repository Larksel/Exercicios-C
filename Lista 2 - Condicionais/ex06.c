/*
    6. Um vendedor necessita de um algoritmo que calcule o preço total devido por um 
    cliente. O algoritmo deve receber o código de um produto e a quantidade comprada e 
    calcular o preço total, usando a tabela abaixo:

    Código do Produto	Preço unitário
    1001			5,32
    1324			6,45
    6548			2,37
    0987			5,32
    7623			6,45
*/
#include <stdio.h>

int main() {
    short cod, quant = 0;
    float total = 0;

    printf("Insira o codigo do produto: ");
    scanf("%hd", &cod);
    printf("Insira a quantidade comprada: ");
    scanf("%hd", &quant);

    if (cod == 1001) {
        total = 5.32 * quant;
    } else if (cod == 1324) {
        total = 6.45 * quant;
    } else if (cod == 6548) {
        total = 2.37 * quant;
    } else if (cod == 987) {
        total = 5.32 * quant;
    } else if (cod == 7623) {
        total = 6.45 * quant;
    } else {
        printf("Codigo invalido. \n");
    }

    printf("O total a ser pago pelo cliente eh R$%.2f. \n", total);

    return 0;
}