/*
    4. Faça um programa que receba um número real e imprima:
    • a parte inteira do número;
    • a parte fracionária do número;
    • arredondamento do número (sem casas decimais).
*/

#include <stdio.h>

int main()
{
    float num, parteFracionaria = 0;
    int parteInteira = 0;
    
    printf("Digite um número real: ");
    scanf("%f", &num);
    
    parteInteira = (int) num;
    parteFracionaria = num - parteInteira;
    
    printf("Parte inteira: %d\n", parteInteira);
    printf("Parte fracionária: %g\n", parteFracionaria);
    printf("Arredondamento: %.0f\n", num);
}
