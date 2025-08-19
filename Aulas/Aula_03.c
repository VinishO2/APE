#include <stdio.h>

int main(){
    int idade; /*nome de variável, geralmente, é com letra minúscula*/

    printf("Digite a sua idade: ");
    scanf("%d", &idade); //%d -> quando a informação for inteira// &-> // scanf -> para ler a informação enviada
    printf("Sua idade e %d\n", idade);

    return 0;
} 