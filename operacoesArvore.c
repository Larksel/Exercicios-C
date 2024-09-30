/*
    Por: Lemuel e Vinicius
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct noArvore {
    int valor;
    struct noArvore *Esq;
    struct noArvore *Dir;
    int altura;
} noArvore;

int menu();

int max(int a, int b)
{
    return a > b ? a : b;
}

noArvore* criarNo(int valor) {
    noArvore* novoNo = (noArvore*) malloc(sizeof(noArvore));

    novoNo->valor = valor;
    novoNo->Esq = NULL;
    novoNo->Dir = NULL;
    novoNo->altura = 1;

    return novoNo;
}

int altura(noArvore *no) {
    if (no == NULL) {
        return 0;
    }
    else {
        return no->altura;
    }
}

int fatorBalanceamento(noArvore *no) {
    if (no == NULL)
        return 0;
    else
        return altura(no->Esq) - altura(no->Dir);
}

void atualizarAltura(noArvore **no) {
    if (*no == NULL)
        return;

    (*no)->altura = 1 + max(altura((*no)->Esq), altura((*no)->Dir));
}

noArvore* rotacaoSimplesDireita(noArvore *raiz) {
    noArvore *novaRaiz = raiz->Esq;
    noArvore *temp = novaRaiz->Dir;

    novaRaiz->Dir = raiz;
    raiz->Esq = temp;

    atualizarAltura(raiz);
    atualizarAltura(&novaRaiz);

    return novaRaiz;
}

noArvore* rotacaoSimplesEsquerda(noArvore *raiz) {
    noArvore *novaRaiz = raiz->Dir;
    noArvore *temp = novaRaiz->Esq;

    novaRaiz->Esq = raiz;
    raiz->Dir = temp;

    atualizarAltura(raiz);
    atualizarAltura(&novaRaiz);

    return novaRaiz;
}

noArvore* rotacaoDuplaDireita(noArvore *no) {
    no->Dir = rotacaoSimpleDireita(no->Dir);
    return rotacaoSimpleEsquerda(no);
}

noArvore* rotacaoDuplaEsquerda(noArvore *no) {
    no->Esq = rotacaoSimpleEsquerda(no->Esq);
    return rotacaoSimplesDireita(no);
}

noArvore* balancear(noArvore *no) {
    int balanceamento = fatorBalanceamento(no);

    if (balanceamento > 1) {
        if (fatorBalanceamento(no->Esq) >= 0)
            return rotacaoSimplesDireita(no);
        else
            return rotacaoDuplaEsquerda(no);
    }
    if (balanceamento < -1) {
        if (fatorBalanceamento(no->Dir) <= 0)
            return rotacaoSimplesEsquerda(no);
        else
            return rotacaoDuplaDireita(no);
    }

    return no;
}

int main() {
    int escolha, valor;
    noArvore *arvore;

    do {
        escolha = menu();

        switch (escolha)
        {
        case 1:
            
            break;

        default:
            printf("Invalido\n");
            break;
        }
    } while (escolha != 0);

    return 0;
}

int menu() {
    int escolha;
    printf("\n======== M E N U ========\n");
    printf("[1] Criar Arvore\n");
    printf("[2] Alocar Raiz\n");
    printf("[9] Exibir Arvore\n");
    printf("[0] Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &escolha);
    printf("\n");
    return escolha;
}
