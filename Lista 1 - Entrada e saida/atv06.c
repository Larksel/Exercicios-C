/*
    6. Faça um programa que receba a idade de uma pessoa em anos, calcule e imprima essa idade em: 
    • Meses, Dias, Horas e Minutos.
*/

#include <stdio.h>

int main()
{
    short idade, meses = 0;
    int dias, horas, minutos = 0;
    
    printf("Digite sua idade: ");
    scanf("%hd", &idade);
    
    meses = idade * 12;
    dias = meses * 30;
    horas = dias * 24;
    minutos = horas * 60;
    
    printf("Meses: %hd\n", meses);
    printf("Dias: %d\n", dias);
    printf("Horas: %d\n", horas);
    printf("Minutos: %d\n", minutos);
}
