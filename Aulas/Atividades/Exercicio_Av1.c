#include <stdio.h>

int main (){
    float peso, exc = 0, resultado = 0;
    

    printf("Digite quantos quilos tem o seu peixe: ");
    scanf("%f", &peso);

    if (peso > 50)
    {
        exc = peso - 50;
        resultado = 4 * exc;
        printf("O excesso de peso foi %0.2fkg \n", exc);
        printf("O valor que Joao tera que pagar de multa e R$%0.2f", resultado);
    } else{
        printf("Voce nao tera que pagar multa");
    }
    
    return 0;

}