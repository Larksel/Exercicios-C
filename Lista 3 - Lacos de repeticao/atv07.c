/*
    7. (WHILE) A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, 
    coletando dados sobre o salário e número de filhos. A prefeitura deseja saber:  

    a) média do salário da população;
    b) média do número de filhos;
    c) maior salário;
    d) percentual de pessoas com salário até R$100,00.

    O final da leitura de dados se dará com a entrada de um salário negativo.
*/
#include <stdio.h>

int main() {
    float salario = 0;
    short qntFilhos = 0;

    short somaFilhos = 0;
    float somaSal = 0;

    short qntHab = 0;
    short qntSalAteCem = 0;
    float maiorSal = 0;

    printf("Digite as informacoes de cada habitante. \nSalario negativo encerra a entrada. \n");

    while (salario >= 0) {
        printf("Salario: R$");
        scanf("%f", &salario);

        if (salario < 0) break;

        printf("Numero de filhos: ");
        scanf("%hd", &qntFilhos);

        if (salario > maiorSal) {
            maiorSal = salario;
        }

        if (salario <= 100) {
            qntSalAteCem++;
        }

        somaSal += salario;
        somaFilhos += qntFilhos;
        qntHab++;
    }

    if (qntHab > 0) {
        float mediaSal = somaSal / qntHab;
        float mediaFilhos = (float) somaFilhos / qntHab;

        float percSalAteCem = (qntSalAteCem * 100) / qntHab;

        printf("Media do salario da populacao: R$%.2f\n", mediaSal);
        printf("Media do numero de filhos da populacao: %.2f\n", mediaFilhos);
        printf("Maior salario: R$%.2f\n", maiorSal);
        printf("Percentual de pessoas com salario ate R$100,00: %.2f%%\n", percSalAteCem);
    } else {
        printf("Não foram inseridos dados suficientes.\n");
    }
    
    return 0;
}