/*
    
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct noArvore {
    int valor;
    struct noArvore *Esq;
    struct noArvore *Dir;
} noArvore;

int menu();
noArvore* criarArvore();
void alocarRaiz(noArvore **arvore, int valor);
noArvore* localizar(noArvore *arvore, int valor);
void exibirArvore(noArvore *raiz);


int main() {
    int escolha, valor;
    noArvore *arvore;

    do {
        escolha = menu();

        switch (escolha)
        {
        case 1:
            arvore = criarArvore();
            printf("Arvore criada");
            break;

        case 2:
            printf("Insira o valor da raiz: ");
            scanf("%d", &valor);
            alocarRaiz(&arvore, valor);

            printf("Valor da raiz: %d\n", arvore->valor);

            break;

        case 9:
            exibirArvore(arvore);
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

noArvore* criarArvore() {
    noArvore *raiz;
    raiz = NULL;

    return raiz;
}

void alocarRaiz(noArvore **arvore, int valor) {
    if (*arvore == NULL) {
        noArvore* ptRaiz = (noArvore*) malloc(sizeof(noArvore));
        ptRaiz->Esq = ptRaiz->Dir = NULL;
        ptRaiz->valor = valor;

        *arvore = ptRaiz;
    }
}

/*
Algoritmo 6.3 – InserirFilhoEsq
 Entradas: Arv (TipoArvore)
 ValorPai, ValorFilho (TipoInfo)
 Saídas: Arv (TipoArvore)
 Sucesso (lógico)
Variáveis auxiliares: Pai, Novo (TipoPtNodo)
início
 Sucesso ← falso
 Pai ← Localizar(Arv, ValorPai)
 se (Pai ≠ nulo) e (Pai↑.Esq = nulo)
 então início
 Sucesso ← verdadeiro
 alocar(Novo)
 Novo↑.Dir ← Novo↑.Esq ← nulo
 Novo↑.Info ← ValorFilho
 Pai↑.Esq ← Novo
 fim
fim
*/
noArvore* inserirFilhoEsq(noArvore *raiz, int valorPai, int valorFilho) {
    
}

noArvore* localizar(noArvore *arvore, int valor) {
    InicializarPilhaArr(Base, Topo);
    int Achou = 0;
    InserirPilhaArr(Pilha, Lim, Topo, Arv, InsOK);
    while (Topo >= 0) && (!Achou) && (!InsOK);
    faça início
    RemoverPilhaArr(Pilha, Topo, Base, OK, PtAux);
    se (PtAux ≠ nulo) e (OK)
    então se PtAux↑.Info = Valor
    então início
    Achou ← verdadeiro;
    Localizar ← PtAux;
    fim
    senão início
    InserirPilhaArr(Pilha, Lim, Topo, PtAux↑.Dir, InsOK);
    InserirPilhaArr(Pilha, Lim, Topo, PtAux↑.Esq, InsOK);
    fim
    fim
    se (não Achou)
    então Localizar ← nulo
    fim
}

void exibirArvore(noArvore *raiz) {
    if (raiz == NULL) return;

    printf("%d ", raiz->valor);
    exibirArvore(raiz->Esq);
    exibirArvore(raiz->Dir);
    printf("\n");
}