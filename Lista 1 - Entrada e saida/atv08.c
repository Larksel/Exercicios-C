/*
    8. Faça um programa que calcule e imprima a área de um círculo.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float raio, area = 0;
    
    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);
    
    area = 3.14 * pow(raio, 2);
    
    printf("Área do círculo: %g\n", area);
}
