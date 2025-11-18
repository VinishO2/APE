#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct pessoa{
    char nome [50];
    int idade;
    float altura;
    struct pessoa *prox;
} pessoa;

void menu(){
    printf("---MENU---\n");
    printf("1. Inserir pessoa no inicio.\n");
    printf("2. Inserir no fim.\n");
    printf("3. Remover por nome.\n");
    printf("4. Mostrar todos.\n");
}

void inserirIni(pessoa **top, pessoa p){
    pessoa *novo = (pessoa*) malloc (sizeof(pessoa));
    if (novo == NULL) return;

    *novo = p;
    novo->prox = *top;
    *top = novo;
    printf("Pessoa %s inserida no inicio.\n", p.nome);
}

void inserirFim(pessoa **top, pessoa p){
    pessoa *novo = (pessoa*) malloc (sizeof(pessoa));
    if (novo == NULL) return;

    *novo = p;
    novo->prox = NULL;

    if (*top == NULL)
    {
        *top = novo;
        printf("Pessoa %s inserida no fim (lista estava vazia).\n", p.nome);
        return;
    }

    pessoa *ult = *top;
    while (ult->prox != NULL)
    {
        ult = ult->prox;
    }
    ult->prox = novo;
    printf("Pessoa %s inserida no fim.\n", p.nome);
}

void removerPorNome(pessoa **top, char nome[]){
    if (*top == NULL)
    {
        printf("A lista esta vazia. \n");
        return;
    }

    pessoa *atual = *top;
    pessoa *ant = NULL;

    while (atual != NULL && strcmp(atual->nome, nome) != 0)
    {
        ant = atual;
        atual = atual->prox;
    }

    if (atual == NULL)
    {
        printf("Pessoa com nome %s nao encontrada. \n", nome);
        return;
    }

    if (ant == NULL)
    {
        *top = atual->prox;
    }
    else
    {
        ant->prox = atual->prox;
    }

    free(atual);
    printf("Pessoa com nome %s removida. \n", nome);
}

void mostrarPessoas(pessoa *list){
    if (list == NULL)
    {
        printf("A lista esta vazia. \n");
        return;
    }

    pessoa *temp = list;
    while (temp != NULL)
    {
        printf("Nome: %s, Idade: %d, Altura: %.2f\n", temp->nome, temp->idade, temp->altura);
        temp = temp->prox;
    }
}

void liberarLista(pessoa **top){
    pessoa *atual = *top;
    pessoa *proxNo;

    while (atual != NULL)
    {
        proxNo = atual->prox;
        free(atual);
        atual = proxNo;
    }

    *top = NULL;
    printf("Lista liberada da memoria.\n");
}

int main(){
    pessoa *lista = NULL;
    int opcao;
    pessoa p;
    char nomeRemover[50];

    do {
        menu();
        printf("Escolha uma opcao (0 para sair): ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Inserir pessoa no inicio.\n");
                printf("Digite o nome: ");
                scanf("%s", p.nome);
                printf("Digite a idade: ");
                scanf("%d", &p.idade);
                printf("Digite a altura: ");
                scanf("%f", &p.altura);
                inserirIni(&lista, p);
                break;
            case 2:
                printf("Inserir pessoa no fim.\n");
                printf("Digite o nome: ");
                scanf("%s", p.nome);
                printf("Digite a idade: ");
                scanf("%d", &p.idade);
                printf("Digite a altura: ");
                scanf("%f", &p.altura);
                inserirFim(&lista, p);
                break;
            case 3:
                printf("Digite o nome da pessoa a remover: ");
                scanf("%s", nomeRemover);
                removerPorNome(&lista, nomeRemover);
                break;
            case 4:
                mostrarPessoas(lista);
                break;
            case 0:
                liberarLista(&lista);
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}