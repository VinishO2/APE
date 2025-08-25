#include <stdio.h>

int main(){
    float v1, v2;
    float resultado;

    printf("Digite um numero: ");
    scanf("%f", &v1);

    printf("Digite outro numero: ");
    scanf("%f", &v2);

    if(v1>v2){
        printf("O numero v1 e maior que v2");
    } else if(v1==v2){
        printf("O numero v1 e igual que v2");
    } else{
        printf("O numero v2 e maior que v1");
    }
    return 0;
}