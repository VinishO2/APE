#include <stdio.h>

int main(){

    int idade;
    printf ("Digite a sua idade: ");
    scanf("%d", &idade);

    if(idade>=24){
        printf("Voce nao recebe mais pensao. F, apenas");
    }else if(idade>=18){ //para fazer varias checagens
        printf("Ta liberado");
    }else {
        printf("Nao ta liberado");
    };





    return 0;
}