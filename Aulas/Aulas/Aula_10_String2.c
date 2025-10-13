#include <stdio.h>

int main(){
    char primeiro_nome [10];
    char segundo_nome[10];

    printf("Digite seu primeiro nome\n");
    scanf("%s", primeiro_nome);

    printf("Digite seu segundo nome\n");
    scanf("%s", segundo_nome);

    printf("O primeiro nome digitado foi %s\n", primeiro_nome);

    printf("O segundo nome digitado foi %s\n", segundo_nome);

    printf("Nome completo %s %s", primeiro_nome, segundo_nome);
    return 0;
}