/*
    7. Faça um programa que calcule a área de um triângulo.
*/

#include <stdio.h>

int main()
{
    float base, altura, area = 0;
    
    printf("Digite o tamanho da base: ");
    scanf("%f", &base);
    printf("Digite o tamanho da altura: ");
    scanf("%f", &altura);
    
    area = (base * altura) / 2;
    
    printf("Área do triângulo: %g\n", area);
}
