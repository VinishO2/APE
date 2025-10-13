#include <stdio.h>

int main(){
    char nome [30];

    printf("Digite seu nome ");
    scanf("%s", nome); // nao precisa do &, porque ele ja trabalha com endereço de memoria

    printf("O nome digitado foi %s", nome);

    return 0;
}