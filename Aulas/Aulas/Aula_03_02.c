#include <stdio.h>

int main(){
    float v1, v2, v3, soma, media; //float -> para valores nao inteiros

    printf("Digite um numero: ");
    scanf("%f", &v1);

    printf("Digite outro numero: ");
    scanf("%f", &v2);

    printf("Digite outro numero: ");
    scanf("%f", &v3);

    soma = v1 + v2 + v3;

    media = (v1 + v2 + v3)/3;

    printf("O resultado e %f", soma);
    printf(" e a media tem resultado de %f", media);

   return 0;
}