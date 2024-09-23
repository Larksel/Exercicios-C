#include <stdio.h>
#include <stdlib.h>

typedef struct noArvore {
    int valor;
    struct noArvore *esquerda;
    struct noArvore *direita;
    // Fator de balanceamento
    // Nivel
    // Altura
} noArvore;

int menu();
noArvore* inserir(noArvore *raiz, int valor);
void exibirArvore(noArvore *raiz);

int main() {
    noArvore *raiz;
    raiz = NULL;
    int escolha;

    do {
        escolha = menu();

        switch (escolha)
        {
        case 1:
            int valor;
            printf("Digite o valor: ");
            scanf("%d", &valor);

            raiz = inserir(raiz, valor);
            break;
        case 2:
            exibirArvore(raiz);
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
    printf("[1] Adicionar Nodo\n");
    printf("[2] Exibir\n");
    printf("[0] Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &escolha);
    printf("\n");
    return escolha;
}

noArvore* inserir(noArvore *raiz, int valor) {
    if (raiz == NULL) {
        raiz = (noArvore*) malloc(sizeof(noArvore));

        raiz->valor = valor;
        raiz->esquerda = NULL;
        raiz->direita = NULL;

        return raiz;
    }

    if (valor < raiz->valor) {
        raiz->esquerda = inserir(raiz->esquerda, valor);
    } else if (valor > raiz->valor) {
        raiz->direita = inserir(raiz->direita, valor);
    } else {
        printf("Valor ja existe\n");
    }

    return raiz;
}

void exibirArvore(noArvore *raiz) {
    if (raiz == NULL) return;

    printf("%d ", raiz->valor);
    exibirArvore(raiz->esquerda);
    exibirArvore(raiz->direita);
}