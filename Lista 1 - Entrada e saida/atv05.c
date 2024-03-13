/*
    5. Faça um programa que receba um número inteiro, calcule e imprima: 
    • a raiz quadrada desse número (sqrt());
    • esse número elevado ao quadrado.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int num = 0;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    
    printf("Raiz quadrada: %g\n", sqrt(num));
    printf("Elevado ao quadrado: %d\n", (int) pow(num, 2));
}
