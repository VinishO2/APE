#include <stdio.h>
// Leia se o numero é impar ou par
int main(){
    int v1;

    printf("Digite um numero: ");
    scanf("%d", &v1);

    if( v1%2==0){
        printf("O numero e par");
    } else {
        printf("O numero e impar");
    }

    return 0;
    }