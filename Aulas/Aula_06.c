#include <stdio.h>

int main (){
    float v1, v2, v3;
    float media;
    int ct = 1;

    while (ct==1) //enquanto o valor definido nao chegar, irá repetir o codigo. Depois irá seguir o resto do codigo
    {

        // media de 3 valores ao mesmo tempo
        printf ("Digite tres valores ");
        scanf ("%f %f %f", &v1, &v2, &v3);

        media = (v1+v2+v3)/3;
        printf ("Sua media e: %f \n", media);

        printf("Digite 0 para terminar e 1 para continuar \n");
        scanf("%d", &ct);
    }

    printf("\nFim do Programa!");

    return 0;
}