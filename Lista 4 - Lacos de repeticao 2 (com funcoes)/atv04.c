/*
    4.  Pesquisa sobre Profissão e Renda: 
    A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados 
    sobre a profissão e renda mensal. A prefeitura deseja saber:
    a) média da renda mensal da população;
    b) profissão com maior média de renda;
    c) percentual de pessoas desempregadas;
    d) percentual de pessoas com renda acima de R$ 5000,00.
    A pesquisa termina quando for inserido o valor "x" para a renda.
*/
#include <stdio.h>

float pegarRenda();
short pegarProfissao();
float calcularMedia(float soma, int total);
float calcularPerc(short parc, short total);

int main() {
    short profissao;
    float renda;
    short qntPessoas = 0, qntMed = 0, qntProf = 0, qntDes = 0, qntRenAlta = 0;
    float somaRenTotal = 0, somaRenMed = 0, somaRenProf = 0;

    renda = pegarRenda();

    while (renda != -1) {
        somaRenTotal += renda;

        if (renda > 5000) {
            qntRenAlta++;
        }

        profissao = pegarProfissao();

        switch (profissao)
        {
            case 1:
                qntMed++;
                somaRenMed += renda;
                break;
            case 2:
                qntProf++;
                somaRenProf += renda;
                break;
            case 3:
                qntDes++;
                break;
            
            default:
                break;
        }

        qntPessoas++;

        renda = pegarRenda();
    }

    float mediaRenTotal = calcularMedia(somaRenTotal, qntPessoas);
    float percDempregados = calcularPerc(qntDes, qntPessoas);
    float percRenAlta = calcularPerc(qntRenAlta, qntPessoas);

    float mediaRenMed = calcularMedia(somaRenMed, qntMed);
    float mediaRenProf = calcularMedia(somaRenProf, qntProf);

    printf("Resultados: \n");
    printf("- Media da renda total: R$%.2f \n", mediaRenTotal);

    if (mediaRenMed > mediaRenProf) {
        printf("- Profissao com maior media de renda: Medico\n");
    } else {
        printf("- Profissao com maior media de renda: Professor\n");
    }
    
    printf("- Percentual de desempregados: %.2f%% \n", percDempregados);
    printf("- Percentual de pessoas com renda acima de R$5000: %.2f%% \n", percRenAlta);
    
    return 0;
}

float pegarRenda() {
    float renda;
    char opcao;

    printf("Digite sua renda (x encerra execucao): R$");
    scanf("%f", &renda); // Se o valor for um numero decimal, ele é registrado como float
    scanf("%c", &opcao); // Se o valor for x ele sera lido como caractere

    if (opcao == 'x') {
        return -1;
    }

    printf("\n");

    return renda;
}

short pegarProfissao() {
    short profissao;

    printf("1 - Medico\n");
    printf("2 - Professor\n");
    printf("3 - Desempregado\n");
    printf("Profissao: ");
    scanf("%hd", &profissao);

    printf("\n");

    return profissao;
}

float calcularMedia(float soma, int total) {
    return (float) soma / total;
}

float calcularPerc(short parc, short total) {
    return (float) (parc * 100) / total;
}