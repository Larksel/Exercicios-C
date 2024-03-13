/*
    5. Tendo como dados de entrada a altura e o sexo de uma pessoa 
    (?M? masculino e ?F? feminino), construa um algoritmo que calcule seu peso ideal, 
    utilizando as seguintes fórmulas:

    - para homens: (72.7*h)-58
    - para mulheres: (62.1*h)-44.7
*/
#include <stdio.h>

int main() {
    float altura, peso = 0;
    char sexo;

    printf("Insira sua altura: ");
    scanf("%f", &altura);
    printf("Insira seu sexo (F ou M): ");
    scanf(" %c", &sexo);

    if (sexo == 'M' || sexo == 'm') {
        peso = (72.7 * altura) - 58;
    } else if (sexo == 'F' || sexo == 'f') {
        peso = (62.1 * altura) - 44.7;
    } else {
        printf("Valor invalido\n");
    }

    printf("Seu peso ideal eh: %g \n", peso);

    return 0;
}