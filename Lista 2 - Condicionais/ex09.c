/*
    9. Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e
    mostre-a expressa apenas em dias.
*/
#include <stdio.h>

int main()
{
    int anos, meses, dias = 0;

    printf("Digite sua idade em \nanos: ");
    scanf("%hd", &anos);
    printf("meses: ");
    scanf("%hd", &meses);
    printf("e dias: ");
    scanf("%hd", &dias);

    if ((meses > 0 && meses < 12) && (dias > 0 && dias < 30))
    {
        meses += anos * 12;
        dias += meses * 30;
        printf("Sua idade em dias eh: %d", dias);
    } else {
        printf("Um dos valores inseridos eh invalido.");
    }

    return 0;
}