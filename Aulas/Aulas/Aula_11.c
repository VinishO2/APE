#include <stdio.h>
#include <string.h> // biblioteca do C para trabalhar com string

int main(){
    char primeiro_nome [10]; // tem x, mas a quantidade que ele armazena é x - 1 caracteres
    char segundo_nome[10];

    printf("Digite seu primeiro nome\n");
    //scanf("%s", primeiro_nome);
    fgets(primeiro_nome, sizeof(primeiro_nome), stdin); //sizeof - le o tamanho da string

    printf("Digite seu segundo nome\n");
    //scanf("%s", segundo_nome);
    fgets(segundo_nome, sizeof(segundo_nome), stdin);

    //printf("O primeiro nome digitado foi %s\n", primeiro_nome);

    //printf("O segundo nome digitado foi %s\n", segundo_nome);

    printf("Nome completo %s", primeiro_nome);
    printf("Nome completo %s", segundo_nome);
    return 0;
}