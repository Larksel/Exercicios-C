#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ItemHist{
    char url[40];
    struct ItemHist *elo;
};

typedef struct ItemHist ItemHist;

int menu();
int adicionarPagina(ItemHist **ponteiroLista, char *url);
int voltarPagina(ItemHist *ponteiroLista, int K);
void exibirHistorico(ItemHist *ponteiroLista);

int main() {
    ItemHist *ponteiroLista;
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
                printf("Pagina adicionada com sucesso\n");
            else
                printf("Erro\n");
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

int adicionarPagina(ItemHist **ponteiroLista, char *url) {
    ItemHist* ponteiroNovo = (ItemHist*) malloc(sizeof(ItemHist));
    if (ponteiroNovo == NULL) { // Memoria cheia
        return 1;
    } else {
        strcpy(ponteiroNovo->url, url);
        ponteiroNovo->elo = *ponteiroLista;
        *ponteiroLista = ponteiroNovo;
        return 0;
    }
}

void exibirHistorico(ItemHist *ponteiroLista) {
    ItemHist *p;

    for(p = ponteiroLista; p != NULL; p = p -> elo) {
        printf("%s\n", p->url);
    }
}

int voltarPagina(ItemHist *ponteiroLista, int K) {
    if (K < 0) { // Posição inválida
        return 1;
    } else {
        ItemHist *PontK = ponteiroLista; // Ponteiro para guardar o endereço a ser removido
        ItemHist *PontAnt = NULL;

        while (PontK != NULL && K > 0) { // Percorrer lista até a posição especificada
            K -= 1;
            PontAnt = PontK;
            PontK = PontK->elo;
        }
        if (PontK == NULL) { // Posição não encontrada
            return 1;
        } else {
            if (PontK == ponteiroLista) {
                ponteiroLista = PontK->elo;
            } else {
                PontAnt->elo = PontK->elo;
            }
            free(PontK);
            
            return 0;
        }
    }
}