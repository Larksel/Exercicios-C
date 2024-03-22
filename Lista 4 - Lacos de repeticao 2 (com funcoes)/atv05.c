/*
    5.  Pesquisa sobre Nível de Satisfação e Tempo de Residência: 
    A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados 
    sobre o nível de satisfação com a cidade e tempo de residência. A prefeitura deseja 
    saber:
    a) média do nível de satisfação da população;
    b) tempo de residência médio na cidade;
    c) percentual de pessoas insatisfeitas;
    d) percentual de pessoas que residem na cidade há mais de 10 anos.
    A pesquisa termina quando for inserido o valor -1 para o nível de satisfação.
*/
#include <stdio.h>

short pegarSatisfacao();
short pegarTempoRes();
float calcularMedia(float soma, int total);
float calcularPerc(short parc, short total);

int main() {
    short satisfacao, tempoRes;
    short qntPessoas = 0, qntMais10 = 0, qntInsatis = 0;
    short somaSatisfacao = 0, somaTempoRes = 0;

    satisfacao = pegarSatisfacao();

    while (satisfacao != -1) {
        somaSatisfacao += satisfacao;

        if (satisfacao < 5) {
            qntInsatis++;
        }

        tempoRes = pegarTempoRes();

        somaTempoRes += tempoRes;

        if (tempoRes > 120) {
            qntMais10++;
        }

        qntPessoas++;

        printf("\n");

        satisfacao = pegarSatisfacao();
    }

    float mediaSatisfacao = calcularMedia(somaSatisfacao, qntPessoas);
    float mediaTempoRes = calcularMedia(somaTempoRes, qntPessoas);
    float percInsatis = calcularPerc(qntInsatis, qntPessoas);
    float percMais10 = calcularPerc(qntMais10, qntPessoas);

    printf("\n\n");
    printf("Resultados: \n");
    printf("- Media da satisfacao: %g\n", mediaSatisfacao);
    printf("- Media do tempo de residencia: %g meses\n", mediaTempoRes);
    printf("- Percentual de pessoas insatisfeitas: %2.f%%\n", percInsatis);
    printf("- Percentual de pessoas residentes a mais de 10 anos: %2.f%%\n", percMais10);

    return 0;
}

short pegarSatisfacao() {
    short satisfacao;

    printf("* -1 encerra a pesquisa.\n");
    printf("Digite seu nivel de satisfacao (0 a 10): ");
    scanf("%hd", &satisfacao);

    return satisfacao;
}

short pegarTempoRes() {
    short tempoRes;

    printf("Digite o tempo de residencia (em meses): ");
    scanf("%hd", &tempoRes);

    return tempoRes;
}

float calcularMedia(float soma, int total) {
    return (float) soma / total;
}

float calcularPerc(short parc, short total) {
    return (float) (parc * 100) / total;
}