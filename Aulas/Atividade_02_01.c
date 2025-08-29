#include <stdio.h>

int main(){
    float n1, n2, n3;
    float media;
    int faltas;


    printf ("Digite sua nota da primeira prova: ");
    scanf ("%f", &n1);

    printf ("Digite sua nota da segunda prova: ");
    scanf ("%f", &n2);

    printf ("Digite sua nota de atividades: ");
    scanf ("%f", &n3);

    printf ("Digite quantas faltas voce tem: ");
    scanf ("%d", &faltas);

    media = (n1 + n2 + n3)/3;
    printf ("Sua media e %f \n", media);

    if(media == 0 && faltas > 18){
        printf("SR \n");
    } else if (faltas > 18){
        printf("Reprovado por faltas \n");
    } else if ( media >= 9 && faltas <=18){
        printf ("SS \n");
    } else if ( media >=7 && media <9.0 && faltas <=18){
        printf ("MS \n");
    } else if (media >=5.0 && media <7.0 && faltas <=18){
        printf ("MM \n");
    } else if (media >=3.0 && media <5.0 && faltas <=18){
        printf ("MI \n");
    } else if (media >=1.0 && media <3.0 && faltas <=18){
        printf ("II \n");
    };

    return 0;


}