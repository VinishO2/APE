#include <stdio.h>

int main(){
    int v1, v2;
    int operacao;
    int resultado;

    printf("Digite um numero: ");
    scanf ("%d", &v1);

    printf("Digite outro numero: ");
    scanf("%d", &v2);

    printf("Digite a operacao(1-4): ");
    scanf("%d", &operacao);

    switch (operacao)
    {
    case 1:
        resultado = v1 + v2;
        printf ("Voce escolheu a soma. O resultado e: %d \n", resultado);
        break;

    case 2:
        resultado = v1 - v2;
        printf("Voce escolheu a subtracao. O resultado e: %d", resultado);
        break;
    case 3: 
        resultado = v1 * v2;
        printf("Voce escolheu a multiplicacao. O resultado e: %d", resultado);
        break;
    case 4:
        resultado = v1 / v2;
        printf("Voce escolheu a divisao. O resultado e: %d", resultado);
        break;

    default:
        printf("Insira uma operacao");
        break;
    };

    //printf("O resultado do e: %d", resultado);

    return 0;
}