/*
    10. Faça um programa que receba o salário de um funcionário, calcule e imprima 
    o valor do imposto de renda a ser pago, sabendo que o imposto equivale a 5% do salário.
*/

#include <stdio.h>

int main()
{
    float salario = 0;
    
    printf("Digite o valor do salario: R$");
    scanf("%f", &salario);
    
    printf("Imposto a ser pago: R$%.2f\n", salario * 0.05);
}
