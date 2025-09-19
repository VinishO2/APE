#include <stdio.h>
#define TAM 3 // define uma constante, e ela irá mudar o tamnaho de todos os que tiverem esta constante

int main(){

    int vet [TAM], uso_memoria, tamanho_vetor;

    for (int i = 0; i < TAM; i++)
    {
        printf("Insira valores: ");
        scanf("%d", &vet[i]);

    }

    printf("Os vetores armazenados sao: ");
    for (int i = 0; i < TAM; i++)
    {
        printf("%d ", vet[i]);
    }

    printf("\nOs vetores armazenados sao: ");
    for (int i = TAM - 1; i > -1; i--)
    {
        printf("%d ", vet[i]);
    }

    uso_memoria = sizeof(vet);
    tamanho_vetor = sizeof(vet)/sizeof(vet[0]);
    printf("\n%d Tamanho de espaco em memoria ", uso_memoria);
    printf("\n %d Numero de elementos", tamanho_vetor);
    printf("\nFim do programa!");
return 0;
    
}