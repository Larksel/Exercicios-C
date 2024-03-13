/*
    4. (FOR) Foi feita uma pesquisa entre os habitantes de uma região. 
    Foram coletados os dados de idade, sexo (M/F) e salário. Faça um algoritmo que 
    informe de 15 pessoas: 
    a) a média de salário do grupo;

    b) maior e menor idade do grupo;

    c) quantidade de mulheres com salário até R$100,00.
*/
#include <stdio.h>

int main() {
    short i;
    short idade = 0;
    char sexo;
    float salario = 0;
    float somaSal = 0;
    float mediaSal = 0;
    short menorIdade = 0;
    short maiorIdade = 0;
    short qntMul = 0;


    for (i = 1; i < 16; i++) {
        printf("Informe sua idade: ");
        scanf("%hd", &idade);

        printf("Informe seu sexo (F/M): ");
        scanf(" %c", &sexo);

        printf("Informe seu salario: R$");
        scanf("%f", &salario);

        if (i == 1) {
            menorIdade = idade;
        }

        somaSal += salario;

        if (idade > maiorIdade) {
            maiorIdade = idade;
        }
        if (idade < menorIdade) {
            menorIdade = idade;
        }
        if (sexo == 'F' && salario <= 100) {
            qntMul += 1;
        }
    }

    mediaSal = somaSal / 15;

    printf("A media de salario do grupo eh: R$%.2f\n", mediaSal);
    printf("A maior idade eh %hd e a menor eh %hd\n", maiorIdade, menorIdade);
    printf("A quantidade de mulheres com salario ate R$100 eh %hd\n", qntMul);

    return 0;
}