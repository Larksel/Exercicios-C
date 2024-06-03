/*
    
*/
#include <stdio.h>
#include <stdlib.h>

struct Item{
    char url[40];
    struct Item *elo;
};

typedef struct Item Item;

int menu();
int adicionarPagina(Item **ponteiroLista, char url[40]);
int voltarPagina();
void exibirHistorico(Item *ponteiroLista);

int main() {
    Item *ponteiroLista;
    ponteiroLista = NULL;
    char url[40];
    int escolha, sucesso;

    do {
        escolha = menu();

        switch (escolha)
        {
        case 1:
            /* Adicionar pagina */
            printf("Digite a nova url: ");
            scanf("%s", url);

            sucesso = adicionarPagina(&ponteiroLista, url);

            if(sucesso == 0)
                printf("\nDeu certo!!!\n");
            else
                printf("\nErro!!!\n");
            break;
        case 2:
            /* Voltar pagina */
            break;
        case 3:
            /* Exibir historico */
            exibirHistorico(ponteiroLista);
            break;
        
        default:
            break;
        }
    } while (escolha != 0);


    return 0;
}

int menu() {
    int escolha;
    printf("\n======== M E N U ========\n");
    printf("[1] Adicionar pagina\n");
    printf("[2] Voltar pagina\n");
    printf("[3] Exibir historico\n");
    printf("[0] Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &escolha);
    printf("\n");
    return escolha;
}

int adicionarPagina(Item **ponteiroLista, char url[40]) {
    Item* ponteiroNovo = (Item*) malloc(sizeof(Item));
    if (ponteiroNovo == NULL) { // Memoria cheia
        return 1;
    } else {
        ponteiroNovo->url = url;
        ponteiroNovo->elo = *ponteiroLista;
        *ponteiroLista = ponteiroNovo;
        return 0;
    }
}

void exibirHistorico(Item *ponteiroLista) {
    Item *p;

    for(p = ponteiroLista; p != NULL; p = p -> elo) {
        printf("%s\t", p->url);
    }
}