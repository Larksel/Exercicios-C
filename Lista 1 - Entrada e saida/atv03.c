/*
    3. Faça um programa que receba o valor de um depósito e o valor da taxa de juros. 
    Calcule e imprima o valor do rendimento e o valor total depois do rendimento.
*/

#include <stdio.h>

int main()
{
    float deposito, taxaJuros, rendimento, total;

    printf("Digite o valor do depósito: ");
    scanf("%f", &deposito);
    printf("Digite a taxa de juros: ");
    scanf("%f", &taxaJuros);

    rendimento = deposito * (taxaJuros / 100);
    total = deposito + rendimento;

    printf("Valor do rendimento: R$ %.2f\n", rendimento);
    printf("Valor total após o rendimento: R$ %.2f\n", total);
}
