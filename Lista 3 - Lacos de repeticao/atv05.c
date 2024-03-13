/*
    5. (WHILE) Faça um algoritmo que determine e escreva:   

    - a maior idade dos habitantes

    - a quantidade de indivíduos do sexo feminino cuja idade está entre 18 e 35 anos 
    inclusive e que tenham olhos verdes e cabelos louros.

    O final do conjunto de habitantes é reconhecido pelo valor -1 entrada como idade.
*/
#include <stdio.h>

int main() {
    short idade = 0;
    char sexo, corOlho, corCabelo;
    short maiorIdade = 0;
    short qntFem = 0;

    while (idade != -1) {
        printf("Informe a idade: ");
        scanf("%hd", &idade);

        if (idade == -1) break;

        printf("Informe o sexo (F/M): ");
        scanf(" %c", &sexo);

        printf("Informe a cor dos olhos \n(V para Verdes e A para Azuis): ");
        scanf(" %c", &corOlho);

        printf("Informe a cor do cabelo \n(L para Louros e C para Castanhos): ");
        scanf(" %c", &corCabelo);

        if (idade > maiorIdade) {
            maiorIdade = idade;
        }
        if (sexo == 'F' && (17 < idade && idade < 36) && corOlho == 'V' && corCabelo == 'L') {
            qntFem++;
        }
    }

    printf("Maior idade: %hd\n", maiorIdade);
    printf("Quantidade de mulheres entre 18 e 35 anos: %hd\n", qntFem);

    return 0;
}