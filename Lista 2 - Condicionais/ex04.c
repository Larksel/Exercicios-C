/*
    4. O cardápio de uma lanchonete é o seguinte:

    Especificação	Código	Preço
    Cachorro quente	100	    1,20
    Bauru simples	101	    1,30
    Bauru com ovo	102	    1,50
    Hambúrger	    103	    1,20
    Cheeseburguer	104	    1,30
    Refrigerante	105	    1,00

    Escrever um algoritmo que leia o código do item pedido, a quantidade e calcule o 
    valor a ser pago por aquele lanche. Considere que a cada execução somente será calculado 
    um item.
*/
#include <stdio.h>

int main()
{
    short cod, quant = 0;
    float preco, total = 0;

    printf("Digite o codigo do produto: ");
    scanf("%hd", &cod);
    printf("Insira a quantidade desejada: ");
    scanf("%hd", &quant);

    if (cod == 100) {
        preco = 1.2;
    } else if (cod == 101) {
        preco = 1.3;
    } else if (cod == 102) {
        preco = 1.5;
    } else if (cod == 103) {
        preco = 1.2;
    } else if (cod == 104) {
        preco = 1.3;
    } else if (cod == 105) {
        preco = 1;
    } else {
        printf("Codigo invalido\n");
    }

    total = preco * quant;

    printf("O total a pagar eh R$%.2f \n", total);

    return 0;
}