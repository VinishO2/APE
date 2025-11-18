#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
    int data;
    struct No *prox;
} No;

void menu(){
    printf("--- MENU ---");
    printf("1. Inserir valor no inicio\n");
    printf("2. Inserir valor no final\n");
    printf("3. Remover elemento por valor\n");
    printf("4. Mostrar lista \n");
    printf("5. SAIR\n");
    printf("Escolha uma opcao: ");
};

No* criarNo(int data){
    No* novo = (No*) malloc(sizeof(No));

    if (novo == NULL)
    {
        printf("Erro! \n");
        return -1;
    }
    
    novo -> data = data;
    novo->prox = NULL;
    return novo;
};

void inserirIni(No** top, int data){
    No* novo = criarNo(data);
    novo->prox = *top;
    *top = novo;
    printf("Valor %d inserido no inicio. \n");
};

int inserirFim(No** top, int data){
    No* novo = criarNo(data);
    if (*top == NULL)
    {
        *top = novo;
        printf("Valor %d inserido no fim (lista estava vazia)");
        return;
    }

    No* ult = *top;
    while (ult->prox != NULL)
    {
        ult = ult->prox;
    }
    ult->prox = novo;
    printf("Valor %d inserido no fim.\n");
    
};
int removerPorValor(No** top, int data){
    No* temp = *top;
    No* ant = NULL;

    if (temp == NULL)
    {
        printf("Nao foi possivel remover %d: A lista esta vazia. \n", data);
        return;
    }
    
    if (temp != NULL && temp->data == data)
    {
        *top = temp->prox;
        free(temp);
        printf("Valor %d removido. \n", data);
        return;
    }

    while (temp != NULL && temp -> data != data)
    {
        ant = temp;
        temp = temp -> prox;
    }
    
    if (temp == NULL)
    {
        printf("Valor %d nao encontrado na lista. \n", data);
        return;
    }

    ant -> prox = temp -> prox;
    free(temp);
    printf("Valor %d removido da lista.\n", data);
    
};


void mostarLista(No* list){
    if (list == NULL)
    {
        printf("A lista esta vazia. \n");
        return;
    }

    printf("Lista: ");
    No* temp = list;
    while (temp != NULL)
    {
        printf("%d -> ", temp -> data);
        temp = temp->prox;
    }
    printf("NULL\n");
    
};
int liberarLista(No** top);



int main{
    No* list = NULL;
    int opcao, valor;

    do
    {
        menu();
        if (scanf("%d", &opcao) !=1)
        {
            while (getchar() != '\n');
            opcao = 0;
        }
        
        switch (opcao)
        {
        case 1:
            printf("Digite o valor a ser inserido no inicio: ");
            scanf("%d", &valor);
            inserirIni(&list, valor);
            break;
        case 2:
            printf("Digite o valor a ser inserido no fim: ");
            scanf("%d", &valor);
            inserirFim(&list, valor);
            break;
        case 3:
            printf("Digite o valor a ser removido: ");
            scanf("%d", &valor);
            removerPorValor(&list, valor);
            break;
        case 4:
            mostarLista(list);
            break;
        case 5:
            printf("Saindo...\n");
            liberarLista(&list);
            break;       
        default:
            printf("Opcao invalida. \n");
            break;
        }
        printf("\n");
    } while (opcao != 5);

    return 0;
    
}