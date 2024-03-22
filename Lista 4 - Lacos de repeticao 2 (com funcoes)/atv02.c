/*
    2.  Pesquisa sobre Cor da Pele e Grau de Escolaridade: 
    A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados 
    sobre a cor da pele e grau de escolaridade. A prefeitura deseja saber:
    a) distribuição da população por cor da pele;
    b) percentual de pessoas com ensino superior completo;
    c) percentual de pessoas com ensino médio incompleto.
    A pesquisa termina quando for inserido o valor -1 para cor da pele.
*/
#include <stdio.h>

short pegarCorPele();
short pegarEscolaridade();
float calcularPerc(short parc, short total);

int main() {
    short corPele;
    short escolaridade;
    short qntPessoas = 0, qntBranco = 0, qntPardo = 0, qntPreto = 0;
    short qntFundamental = 0, qntMedio = 0, qntSuperior = 0;

    corPele = pegarCorPele();

    while (corPele != -1) {
        switch (corPele) {
            case 1:
                qntBranco++;
                break;
            case 2:
                qntPardo++;
                break;
            case 3:
                qntPreto++;
                break;
            default:
                break;
        }

        escolaridade = pegarEscolaridade();

        switch (escolaridade) {
            case 1:
                qntFundamental++;
                break;
            case 2:
                qntMedio++;
                break;
            case 3:
                qntSuperior++;
                break;
            
            default:
                break;
        }

        qntPessoas++;

        printf("\n");

        corPele = pegarCorPele();
    }

    float percSuperior = calcularPerc(qntSuperior, qntPessoas);
    float percMedioInc = calcularPerc(qntFundamental, qntPessoas);

    printf("\n\n");

    printf("===== Resultados =====\n");
    printf("Populacao: \n");
    printf("- Total: %hd\n", qntPessoas);
    printf("- Brancos: %hd\n", qntBranco);
    printf("- Pardos: %hd\n", qntPardo);
    printf("- Pretos: %hd\n", qntPreto);
    printf("\n");
    printf("Percentual de pessoas com ensino superior completo: %.2f%% \n", percSuperior);
    printf("Percentual de pessoas com ensino medio incompleto: %.2f%% \n", percMedioInc);
    
    return 0;
}

short pegarCorPele() {
    short escolha;

    printf(" 1 - Branco\n");
    printf(" 2 - Pardo\n");
    printf(" 3 - Preto\n");
    printf("-1 - Encerrar pesquisa\n");
    printf("Digite a cor de sua pele: ");
    scanf("%hd", &escolha);

    printf("\n");

    return escolha;
}

short pegarEscolaridade() {
    short escolaridade;

    printf("1 - Fundamental\n");
    printf("2 - Medio\n");
    printf("3 - Superior\n");
    printf("Digite seu nivel de escolaridade: ");
    scanf("%hd", &escolaridade);

    printf("\n");

    return escolaridade;
}

float calcularPerc(short parc, short total) {
    return (float) (parc * 100) / total;
}