#include <stdio.h>

//Função de cálculo da média sem ser generica
float calcMedia(float v1, float v2, float v3){ //função do tipo float - passa os parametros e retorna os valores

    return (v1+v2+v3)/3;

}


int main(){

    float a,b,c;
    float media;

    printf("Digite o valor a: ");
    scanf("%f", &a);
    printf("Digite o valor b: ");
    scanf("%f", &b);
    printf("Digite o valor c: ");
    scanf("%f", &c);

    media = calcMedia(a,b,c);

    printf("A media e: %0.2f", media);

    return 0; 
}