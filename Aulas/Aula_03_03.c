#include <stdio.h>

int main(){
    int v1;
    int v2;
    int v3;
    int media;

    printf("Digite um numero: ");
    scanf("%d", &v1);

    printf("Digite outro numero: ");
    scanf("%d", &v2);

    printf("Digite outro numero: ");
    scanf("%d", &v3);

    media = (v1 + v2 + v3)/2;
    
    prinf ("O resultado da media e %d", media);

   return 0;
}