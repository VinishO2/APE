#include <stdio.h>

int main(){

    float n1, n2; 
    float resultado;
    char operacao;

    printf ("Digite um numero: ");
    scanf("%f", &n1);

    printf ("Digite outro numero: ");
    scanf("%f", &n2);

    printf ("[s] Soma | [m] multiplicacao | [z] subtracao | [d] divisao\n");
    printf ("Digite a operacao: ");
    scanf ("%s",&operacao);

if (operacao == 's' || operacao == 'S'){ // || -> ou
        resultado = n1 + n2;
    }else if (operacao == 'm'){
        resultado = n1 * n2;
    } else if (operacao == 'z'){
        resultado = n1 - n2;
    } else if (operacao == 'd') {
        resultado = n1 / n2;
    };

    printf ("O resultado e %f", resultado);


    return 0;
}