#include <stdio.h>
#define NOTA 5

int main(){

    float nota[NOTA], total, soma;

    for (int i = 0; i < NOTA; i++)
    {
        printf("Insira as notas: ");
        scanf("%f", &nota[i]);
    
    }
    
    printf("As notas sao: ");
    for (int i = 0; i < NOTA; i++)
    {
        printf("%0.2f ", nota[i]);
        soma += nota[i];
    }
    
    total = soma / NOTA;
    printf("\nMedia e: %0.2f", total);
    
}