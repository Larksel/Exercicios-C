/*
    2. Faça um programa que receba três notas de um aluno, 
    calcule e imprima a média aritmética entre essas notas.
*/

#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, media = 0;
    printf("Insira a primeira nota: ");
    scanf("%f", &nota1);
    printf("Insira a segunda nota: ");
    scanf("%f", &nota2);
    printf("Insira a terceira nota: ");
    scanf("%f", &nota3);
    
    media = (nota1 + nota2 + nota3) / 3;
    
    printf("A média do aluno é: %.2f\n", media);
}
