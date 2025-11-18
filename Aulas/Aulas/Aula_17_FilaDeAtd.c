#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct fila {
    char nome[50];
    int senha;
    struct fila* prox;
} fila;

fila* criar_fila() {
    return NULL;
}

void menu(){
    printf("---MENU---\n");
    printf("1. Gerar nova senha e enfileirar.\n");
    printf("2. Chamar proxima pessoa (desenfileirar).\n");
    printf("3. Mostrar fila atual.\n");
}

void enfileirar(fila** comec, fila** final, char nome[], int senha) {
    fila* novo = (fila*)malloc(sizeof(fila));
    if (novo == NULL) return;

    strcpy(novo->nome, nome);
    novo->senha = senha;
    novo->prox = NULL;

    if (*final == NULL) {
        *comec = *final = novo;
    } else {
        (*final)->prox = novo;
        *final = novo;
    }
    printf("Pessoa %s com senha %d enfileirada.\n", nome, senha);
}

void desenfileirar(fila** comec, fila** final) {
    if (*comec == NULL) {
        printf("A fila esta vazia.\n");
        return;
    }

    fila* temp = *comec;
    printf("Chamando pessoa %s com senha %d.\n", temp->nome, temp->senha);
    *comec = (*comec)->prox;

    if (*comec == NULL) {
        *final = NULL;
    }

    free(temp);
}

void mostrarfila(fila* comec) {
    if (comec == NULL) {
        printf("A fila esta vazia.\n");
        return;
    }

    fila* temp = comec;
    printf("Fila atual:\n");
    while (temp != NULL) {
        printf("Nome: %s, Senha: %d\n", temp->nome, temp->senha);
        temp = temp->prox;
    }
}

int main(){
    fila* comec = criar_fila();
    fila* final = criar_fila();
    int opcao;
    char nome[50];
    int senha = 0;

    do {
        menu();
        printf("Escolha uma opcao (0 para sair): ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o nome da pessoa: ");
                scanf("%s", nome);
                senha++;
                enfileirar(&comec, &final, nome, senha);
                break;
            case 2:
                desenfileirar(&comec, &final);
                break;
            case 3:
                mostrarfila(comec);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}