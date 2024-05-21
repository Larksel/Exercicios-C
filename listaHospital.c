#include <stdio.h>
#define N 5

struct Paciente
{
    int codigo;
    char nome[20];
};
typedef struct Paciente Paciente;

int menu(int *opcao);
int inserir(Paciente fila[], int IA, int FA, int *IL, int *FL, Paciente paciente);
int atenderPaciente(Paciente filaNormal[], Paciente filaEmergencia[], int *ILNormal, int *FLNormal, int *ILEmer, int *FLEmer);
int mostrarFilas(Paciente filaNormal[], Paciente filaEmergencia[], int IA, int FA, int ILNormal, int FLNormal, int ILEmer, int FLEmer);

int main() {
    Paciente filaNormal[N], filaEmergencia[N], paciente;
    int IA = 0, FA = N - 1, ILNormal = -1, FLNormal = -1, ILEmer = -1, FLEmer = -1, opcao;

    do {
        menu(&opcao);

        switch (opcao)
        {
        case 1:
            printf("Inserindo na fila normal...\n");
            printf("Codigo: "); scanf("%d",&paciente.codigo);
            printf("Nome: "); scanf("%s",paciente.nome);
            inserir(filaNormal, IA, FA, &ILNormal, &FLNormal, paciente);
            break;

        case 2:
            printf("Inserindo na fila de emergencia...\n");
            printf("Codigo: "); scanf("%d",&paciente.codigo);
            printf("Nome: "); scanf("%s",paciente.nome);
            inserir(filaEmergencia, IA, FA, &ILEmer, &FLEmer, paciente);
            break;

        case 3:
            printf("Atendendo paciente...\n");
            atenderPaciente(filaNormal, filaEmergencia, &ILNormal, &FLNormal, &ILEmer, &FLEmer);
            break;

        case 4:
            printf("Mostrando filas...\n");
            mostrarFilas(filaNormal, filaEmergencia, IA, FA, ILNormal, FLNormal, ILEmer, FLEmer);
            break;
        
        default:
            break;
        }
    } while (opcao != 0);


    
    return 0;
}

int menu(int *opcao)
{
    printf("\n======== M E N U ========\n");
    printf("[1] Inserir na fila normal\n");
    printf("[2] Inserir na fila de emergencia\n");
    printf("[3] Atender paciente\n");
    printf("[4] Mostrar filas\n");
    printf("[0] Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", opcao);
    printf("\n");
    return 0;
}

int inserir(Paciente fila[], int IA, int FA, int *IL, int *FL, Paciente paciente) {
    int i;
    
    if (IA == *IL && FA == *FL) { // Cheia
        printf("Lista cheia. Cancelando...\n");
        return 1;
    }
    else 
    {
        if (*IL == -1) // Vazia
            *IL = *FL = FA;
        else if (*FL < FA) // Espaço disponível
            *FL += 1;                  
        else // Precisa arrumar espaço
        {       
            for (i=*IL; i <= *FL; i++)
                fila[i-1] = fila[i];
            *IL -= 1;
        }
        fila[*FL] = paciente;
        return 0;
    }
}

int mostrarFilas(Paciente filaNormal[], Paciente filaEmergencia[], int IA, int FA, int ILNormal, int FLNormal, int ILEmer, int FLEmer) {
    int i;

    printf("Fila emergencial: \n");
    for(i=IA; i<=FA; i++){
        if(i>=ILEmer && i<=FLEmer)
            printf("%2d - %s\n", filaEmergencia[i].codigo, filaEmergencia[i].nome);
        else
            printf("-------\n");
    }

    printf("\n");

    printf("Fila normal: \n");
    for(i=IA; i<=FA; i++){
        if(i>=ILNormal && i<=FLNormal)
            printf("%2d - %s\n", filaNormal[i].codigo, filaNormal[i].nome);
        else
            printf("-------\n");
    }
    return 0;
}

int atenderPaciente(Paciente filaNormal[], Paciente filaEmergencia[], int *ILNormal, int *FLNormal, int *ILEmer, int *FLEmer) {
    Paciente paciente;
    
    if (*ILEmer != -1) {
        paciente = filaEmergencia[*ILEmer];
        printf("Paciente %s, da fila de emergencia, atendido\n", paciente.nome);

        *ILEmer += 1;
        if (*ILEmer > *FLEmer)
            *ILEmer = *FLEmer = -1;

    } else if (*ILNormal != -1) {
        paciente = filaNormal[*ILNormal];
        printf("Paciente %s, da fila normal, atendido\n", paciente.nome);

        *ILNormal += 1;
        if (*ILNormal > *FLNormal)
            *ILNormal = *FLNormal = -1;
        
    } else {
        printf("Nao ha pacientes esperando atendimento.\n");
    }

    return 0;
}
