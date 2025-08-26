#include <stdio.h>

int main(){
    float nota;
    int falta;
    
    printf("Qual a sua nota?");
    scanf("%f", &nota);

    printf("Quantas faltas voce tem? ");
    scanf("%d", &falta);

    if(nota >= 9.0 && falta <20){
        printf("Voce esta aprovado com folga!");
    } else if (nota >= 7.0 && falta < 15){
        printf("Voce esta aprovado!");
    } else if (nota >=5.0 < 7.0 && falta < 15) {
        printf("Voce esta de recuperacao");
    } else {
        printf ("Voce esta reprovado!");
    }

 
    return 0;
}