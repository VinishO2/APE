#include <stdio.h>

int main(){
    int idade; /*nome de variável, geralmente, é com letra minúscula*/

    printf("Digite a sua idade: ");
    scanf("%d", &idade); //%d -> quando a informação for inteira// &-> aloca o endereço para salvar a informação // scanf -> comando que pede uma entrada via teclado
    
    printf("Sua idade e %d\n", idade);
    printf("Minha posicao de memoria e %d\n", &idade);

    return 0;
} 