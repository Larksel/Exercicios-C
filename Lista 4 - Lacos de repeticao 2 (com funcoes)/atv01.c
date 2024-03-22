/*
    1.  Pesquisa sobre Idade e Altura: 
    A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados 
    sobre a idade e altura. A prefeitura deseja saber:
    a) média da idade da população;
    b) média da altura da população;
    c) maior idade registrada;
    d) percentual de pessoas com altura acima de 1,80 metros.
    O final da leitura de dados se dará com a entrada de uma idade negativa.
*/
#include <stdio.h>

short pegarIdade();
float pegarAltura();
float calcularMedia(float soma, int total);
float calcularPerc(short parc, short total);

int main() {
    short idade;
    float altura;
    short maiorIdade = 0;
    short somaIdade = 0, somaAltura = 0;
    short qntPessoas = 0, qntMaior180 = 0;

    idade = pegarIdade();

    while (idade > -1) {
        somaIdade += idade;
        
        if (idade > maiorIdade) {
            maiorIdade = idade;
        }

        altura = pegarAltura();

        somaAltura += altura;

        if (altura > 1.8) {
            qntMaior180++;
        }

        qntPessoas++;

        printf("\n");

        idade = pegarIdade();
    }

    float mediaIdade = calcularMedia(somaIdade, qntPessoas);
    float mediaAltura = calcularMedia(somaAltura, qntPessoas);
    float percMaior180= calcularPerc(qntMaior180, qntPessoas);

    printf("\n\n");

    printf("Resultados:\n");
    printf("- Media de idade: %g \n", mediaIdade);
    printf("- Media de altura: %.2fm \n", mediaAltura);
    printf("- Maior idade: %hd \n", maiorIdade);
    printf("- Percentual de pessoas com altura maior que 1,80m: %.2f%%\n", percMaior180);
    
    return 0;
}

short pegarIdade() {
    short idade;

    printf("Digite a idade (numeros negativos encerram a execucao): ");
    scanf("%hd", &idade);

    return idade;
}

float pegarAltura() {
    float altura;

    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    return altura;
}

float calcularMedia(float soma, int total) {
    return (float) soma / total;
}

float calcularPerc(short parc, short total) {
    return (float) (parc * 100) / total;
}