//sem atribuir valores aos vetores

#include <stdio.h>

int main(){

    
    int vet [4];
    
    for (int i = 0; i < 4; i++)
    {
        printf("Insira 4 valores: ");
        scanf("%d", &vet[i]);

    }

    printf("Os vetores armazenados sao: ");
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", vet[i]);
    }

    printf("\nFim do programa!");
return 0;
    
}