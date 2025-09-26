#include <stdio.h>
#define TAM 4

int main(){

    int num [TAM], i, qtPar = 0, qtImp=0, maxNum = 0, minNum;
    float soma, media;

    for (i = 0; i < TAM; i++)
    {
        printf("Digite numeros: ");
        scanf("%d", &num[i]);
    }
    
    printf("Os numeros sao ");
    for (i = 0; i < TAM; i++)
    {
        printf("%d ", num[i]);
    }

    // Maior e Menor numero digitado
    printf("\nO maior e menor numero sao, respectivamente: ");
    for (i = 0; i < TAM; i++)
    {
        if (num[i] > maxNum){
            maxNum = num[i];
        } 

        if (num[i] < minNum)
        {
            minNum = num[i];
        }
        
    }
        printf("%d e %d", maxNum, minNum);
    

    //Indicacao se sao pares ou impares
    printf("\nA quantidade de numeros pares e impares sao, respectivamente: ");
    for (i = 0; i < TAM; i++)
    {
        if (num[i]%2==0){
            qtPar++;
        } else {
            qtImp++;
        }
        
    }
        printf("%d e %d", qtPar,qtImp);

    // Definindo a media
    printf("\nA media e: ");
    for (i = 0; i < TAM; i++)
    {
        soma+= num[i];
    }
        media = soma / TAM;
        printf("%0.2f", media); 
    
return 0;
}