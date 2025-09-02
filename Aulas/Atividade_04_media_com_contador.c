#include <stdio.h>

int main (){
    float numero;
    float soma = 0;
    float total = 0;
    
    printf ("\nEntre com um numero: ");
    scanf("%f", &numero);

    while (numero > 0)
    {
        soma = soma + numero;
        total = total + 1; // ou total++

        printf("\nEntre com um numero: ");
        scanf("%f", &numero);
    }

    //Processamento
    if(total == 0){
        printf ("Nao foi inserido nenhum numero!");
    } else {
        if(total == 1){
            printf("\nFoi inserido %.0f numero", total); //%0.f -> formatacao da quantiade de casas decimais
        } else{
            printf("\nForam inseridos %.0f numeros", total);
            printf("\nA media dos numeros entrados e: %f", soma/total); 
        }
    }
    // por ser infinitas vezes coloca a soma pela quantidade de numeros
    return 0;
    
    }