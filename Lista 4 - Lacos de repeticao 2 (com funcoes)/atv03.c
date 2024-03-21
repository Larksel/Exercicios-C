/*
    3.  Pesquisa sobre Sexo e Estado Civil: 
    A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados 
    sobre o sexo e estado civil. A prefeitura deseja saber:
        a) distribuição da população por sexo;
        b) percentual de pessoas solteiras;
        c) quantidade de pessoas casadas;
        d) percentual de pessoas divorciadas.
        A pesquisa termina quando for inserido o valor "X" para o sexo.
*/
#include <stdio.h>

char pegarSexo();
short pegarEstadoCivil();
float calcularPerc(short parc, short total);

int main() {
    char sexo;
    short estadoCivil;
    short qntPessoas = 0, qntFem = 0, qntMasc = 0;
    short qntSolteiros = 0, qntDivorciados = 0, qntCasados = 0;


    float percSolt = 0, percDiv = 0;

    sexo = pegarSexo();

    while (sexo != 'X') {
        switch (sexo)
        {
        case 'F':
            qntFem++;
            break;

        case 'M':
            qntMasc++;
            break;
        
        default:
            break;
        }

        estadoCivil = pegarEstadoCivil();

        switch (estadoCivil)
        {
            case 1:
                qntSolteiros++;
                break;

            case 2:
                qntCasados++;
                break;

            case 3:
                qntDivorciados++;
                break;
            
            default:
                break;
        }

        qntPessoas++;

        sexo = pegarSexo();
    }

    percSolt = calcularPerc(qntSolteiros, qntPessoas);
    percDiv = calcularPerc(qntDivorciados, qntPessoas);

    printf("\n\n");

    printf("Distribuicao:\n");
    printf("- Total: %hd\n", qntPessoas);
    printf("- Feminino: %hd\n", qntFem);
    printf("- Masculino: %hd\n", qntMasc);

    printf("\n");

    printf("- Porcentagem de pessoas solteiras: %g%%\n", percSolt);
    printf("- Quantidade de pessoas casadas: %hd\n", qntCasados);
    printf("- Porcentagem de pessoas divorciadas: %g%%\n", percDiv);
    
    return 0;
}

char pegarSexo() {
    char sexo;

    printf("F - Feminino\n");
    printf("M - Masculino\n");
    printf("X - Parar execucao\n");
    printf("Digite seu sexo: ");
    scanf(" %c", &sexo);

    printf("\n");

    return sexo;
}

short pegarEstadoCivil() {
    short estadoCivil;

    printf("1 - Solteiro\n");
    printf("2 - Casado\n");
    printf("3 - Divorciado\n");
    printf("Estado civil: ");
    scanf("%hd", &estadoCivil);

    printf("\n");

    return estadoCivil;
}

float calcularPerc(short parc, short total) {
    return (float) (parc * 100) / total;
}