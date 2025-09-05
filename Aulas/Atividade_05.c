#include <stdio.h>

int main(){
    float n1, n2;
    int resp = 1;
    float media;
    
    do
    {
        printf("Digite a nota 1: ");
        scanf("%f", &n1);

        printf("Digite a nota 2: ");
        scanf("%f", &n2);

        printf("Sua media e %.0f\n", (n1 + n2)/2);
        printf("Se deseja encerrar digite 0, caso deseje continuar digite 1\n");
        scanf("%d", &resp);
        
    } while (resp == 1);


    return 0;
    

}