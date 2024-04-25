#include <stdio.h>
#include <string.h>
#define N 10

struct Agenda
{
    int codigo;
    char nome[30];
    int telefone;
};

short menu();
short descobrirIndx(struct Agenda *agenda, int *cont, int cod);
short gerarCod(struct Agenda *agenda, int *cont);
void cadastrar(struct Agenda *agenda, int *cont);
void listar(struct Agenda *agenda,  int *cont);
void editar(struct Agenda *agenda,  int *cont);
void excluir(struct Agenda *agenda, int *cont);
void ordenarNome(struct Agenda *agenda, int *cont);

int main() {
    int cont = 0;
    struct Agenda agenda[N];
    short escolha = -1;

    while(escolha != 0) {
        escolha = menu();
        switch (escolha)
        {
        case 1:
            cadastrar(agenda, &cont);
            break;
        case 2:
            listar(agenda, &cont);
            break;
        case 3:
            editar(agenda, &cont);
            break;
        case 4:
            excluir(agenda, &cont);
            break;
        case 5:
            ordenarNome(agenda, &cont);
            break;
        
        default:
            break;
        }
    }

    return 0;
}

short menu() {
    short escolha;
    printf("\n=================================\n");
    printf("              Agenda             \n");
    printf("=================================\n");
    printf("[1] Cadastrar\n");
    printf("[2] Listar\n");
    printf("[3] Editar\n");
    printf("[4] Excluir\n");
    printf("[5] Ordenar por nome\n");
    printf("[0] Sair\n");
    printf("-> ");
    scanf("%hd", &escolha);
    printf("\n");
    return escolha;
}

void cadastrar(struct Agenda *agenda, int *cont) {
    if (*cont < N) {
        if (*cont == 0) {
            agenda[*cont].codigo = 1;
        } else {
            agenda[*cont].codigo = gerarCod(agenda, cont);
        }
        
        printf("Digite o nome: ");
        scanf("%s", agenda[*cont].nome);
        printf("Digite o telefone: ");
        scanf("%d", &agenda[*cont].telefone);
        *cont += 1;
    } else {
        printf("A agenda esta cheia.\n");
    }
}

void listar(struct Agenda *agenda,  int *cont) {
    short i;
    if (*cont > 0) {
        for (i = 0; i < *cont; i++) {
            printf("------------------------------\n");
            printf("Codigo: %d\n", agenda[i].codigo);
            printf("Nome: %s\n", agenda[i].nome);
            printf("Telefone: %d\n", agenda[i].telefone);
        }
        printf("------------------------------\n");
    } else {
        printf("Nao ha registros\n");
    }
}

void editar(struct Agenda *agenda,  int *cont) {
    int cod;

    printf("Digite o codigo do registro a ser editado: ");
    scanf("%d", &cod);
    short index = descobrirIndx(agenda, cont, cod);

    if (index != -1) {
        printf("Insira o novo nome: ");
        scanf("%s", agenda[index].nome);
        printf("Insira o novo telefone: ");
        scanf("%d", &agenda[index].telefone);
    } else {
        printf("Nao existe um registro com o codigo %d\n", cod);
    }
}

void excluir(struct Agenda *agenda, int *cont) {
    short i;
    int cod;
    printf("Digite o codigo do registro a ser excluido: ");
    scanf("%d", &cod);
    short index = descobrirIndx(agenda, cont, cod);

    if (index != -1) {
        for (i = index; i < *cont-1; i++) {
            agenda[i].codigo = agenda[i+1].codigo;
            strcpy(agenda[i].nome, agenda[i+1].nome);
            agenda[i].telefone = agenda[i+1].telefone;
        }
        *cont -= 1;

        printf("Registro de codigo %d excluido\n", cod);
    } else {
        printf("Nao existe um registro com o codigo %d\n", cod);
    }
}

void ordenarNome(struct Agenda *agenda, int *cont) {
    short i, j;
    int codTemp;
    char nomeTemp[30];
    int telTemp;

    for (i = 0; i < *cont; i++) {
        for (j = 0; j < *cont - 1; j++) {
            if (strcmp(agenda[j].nome, agenda[j+1].nome) > 0) {
                codTemp = agenda[j].codigo;
                strcpy(nomeTemp, agenda[j].nome);
                telTemp = agenda[j].telefone;

                agenda[j].codigo = agenda[j+1].codigo;
                strcpy(agenda[j].nome, agenda[j+1].nome);
                agenda[j].telefone = agenda[j+1].telefone;

                agenda[j+1].codigo = codTemp;
                strcpy(agenda[j+1].nome, nomeTemp);
                agenda[j+1].telefone = telTemp;
            }
        }
    }

    listar(agenda, cont);
}

short descobrirIndx(struct Agenda *agenda, int *cont, int cod) {
    short i;
    for (i = 0; i < *cont; i++) {
        if (agenda[i].codigo == cod) {
            return i;
        }
    }
    return -1;
}

short gerarCod(struct Agenda *agenda, int *cont) {
    short i, maior = 0;
    for (i = 0; i < *cont; i++) {
        if (agenda[i].codigo > maior) {
            maior = agenda[i].codigo;
        }
    }

    return maior+1;
}