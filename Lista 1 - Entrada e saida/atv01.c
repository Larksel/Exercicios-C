/*
    1. Faça um programa que receba dois números inteiros, calcule e imprima: 
    • soma dos dois números;
    • subtração do primeiro pelo segundo;
    • subtração do segundo pelo primeiro;
    • multiplicação dos dois números;
    • divisão do primeiro pelo segundo (resultado em real);
    • divisão do segundo pelo primeiro (resultado em real);
    • quociente inteiro da divisão do primeiro pelo segundo;
    • quociente inteiro da divisão do segundo pelo primeiro;
    • resto da divisão do primeiro pelo segundo;
    • resto da divisão do segundo pelo primeiro.
*/

#include <stdio.h>

int main(){
    int num1, num2 = 0;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);
    
    //soma dos dois números;
    printf("%d + %d = %d\n", num1, num2, num1 + num2);

    //subtração do primeiro pelo segundo;
    printf("%d - %d = %d\n", num1, num2, num1 - num2);

    //subtração do segundo pelo primeiro;
    printf("%d - %d = %d\n", num2, num1, num2 - num1);

    //multiplicação dos dois números;
    printf("%d x %d = %d\n", num1, num2, num1 * num2);

    //divisão do primeiro pelo segundo (resultado em real);
    printf("%d / %d = %g\n", num1, num2, (float) num1 / num2);
    
    //divisão do segundo pelo primeiro (resultado em real);
    printf("%d / %d = %g\n", num2, num1, (float) num2 / num1);

    //quociente inteiro da divisão do primeiro pelo segundo;
    printf("%d // %d = %d\n", num1, num2, num1 / num2);

    //quociente inteiro da divisão do segundo pelo primeiro;
    printf("%d // %d = %d\n", num2, num1, num2 / num1);

    //resto da divisão do primeiro pelo segundo;
    printf("%d resto da divisão %d = %d\n", num1, num2, num1 % num2);

    //resto da divisão do segundo pelo primeiro.
    printf("%d resto da divisão %d = %d\n", num2, num1, num2 % num1);
}