#include <stdio.h>
#define N 10

struct Agenda
{
    int codigo;
    char nome[30];
    int telefone;
};

short menu();
void listar(struct Agenda *agenda,  int *cont);
void cadastrar(struct Agenda *agenda, int *cont);
void excluir(struct Agenda *agenda, int *cont);

int main() {
    int cont = 0;
    struct Agenda agenda[N];
    short escolha = -1;

    while(escolha != 0) {
        escolha = menu();
        switch (escolha)
        {
        case 1:
            listar(agenda, &cont);
            break;
        case 2:
            cadastrar(agenda, &cont);
            break;
        case 3:
            printf("Excluir\n\n");
            break;
        case 4:
            printf("Editar\n\n");
            break;
        case 5:
            printf("Ordenar por nome\n\n");
            break;
        
        default:
            break;
        }
    }

    return 0;
}

short menu() {
    short escolha;
    printf("\n---------------------------------\n");
    printf("              Agenda             \n");
    printf("---------------------------------\n");
    printf("[1] Listar\n");
    printf("[2] Cadastrar\n");
    printf("[3] Excluir\n");
    printf("[4] Editar\n");
    printf("[5] Ordenar por nome\n");
    printf("[0] Sair\n");
    printf("-> ");
    scanf("%hd", &escolha);
    printf("\n\n");
    return escolha;
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
        printf("Nao a registros\n");
    }
}

void cadastrar(struct Agenda *agenda, int *cont) {
    if (*cont < N) {
        agenda[*cont].codigo = *cont + 1;
        printf("Digite o nome: ");
        scanf("%s", agenda[*cont].nome);
        printf("Digite o telefone: ");
        scanf("%d", &agenda[*cont].telefone);
        *cont += 1;
    } else {
        printf("A agenda esta cheia.\n");
    }
}

void excluir(struct Agenda *agenda, int *cont) {
    short i;
    int cod;
    printf("Digite o codigo do registro a ser excluido: ");
    scanf("%d", &cod);
    for (i = 0; i < *cont; i++) {
        //TODO começa no indice do cod escolhido
        //TODO vai até o valor de cont que é a quantidade de registros
    }
}
