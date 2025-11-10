#include <stdio.h>

int main(){

    int vet [4];
    vet [0] = 1;
    vet [1] = 6;
    vet [2] = 5; 
    vet [3] = 7;

    printf("Os vetores armazenados sao: ");
    for (int i = 0; i < 4; i++)
    {
        printf("%d \n", vet[i]);
    }

    printf("Fim do programa!");
return 0;
    
}