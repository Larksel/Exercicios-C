/*
    9. Faça um programa que calcule e imprima a área de um trapézio.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float base1, base2, altura, area = 0;
    
    printf("Digite a base menor: ");
    scanf("%f", &base1);
    
    printf("Digite a base maior: ");
    scanf("%f", &base2);
    
    printf("Digite a altura: ");
    scanf("%f", &altura);
    
    area = (base1 + base2) * altura / 2;
    
    printf("Área do trapézio: %g\n", area);
}
