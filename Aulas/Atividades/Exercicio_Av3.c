#include <stdio.h>
#define MES 12

int main (){
    float temp[MES], media, soma, i;
    
    for (int i = 0; i < MES; i++)
    {
        printf("Digite as temperaturas dos meses: ");
        scanf("%f", &temp[i]);
    }
    
    printf("As temperaturas sao: ");
    for (int i = 0; i < MES; i++)
    {
        printf("%0.2f C\n", temp[i]);
    }
    
    printf("A media anual das temperaturas e: ");
    for (int i = 0; i < MES; i++)
    {
        soma += temp[i];
    }  
    media = soma / MES;
    printf("%0.2f C\n", media);

    printf("As maiores temperaturas sao os meses: ");
    for (int i = 0; i < MES; i++)
    {
        if (temp[i] > media)
        {
            switch (i)
            {
            case 0:
                printf("1 - Janeiro - %0.2f", temp[i]);
                break;
            case 1:
                printf(" 2 - Fevereiro - %0.2f", temp[i]);
                break;
            case 2:
                printf(" 3 - Março - %0.2f", temp[i]);
                break;
            case 3:
                printf(" 4 - Abril - %0.2f", temp[i]);
                break;
            case 4:
                printf(" 5 - Maio - %0.2f", temp[i]);
                break;
            case 5:
                printf(" 6 - Junho - %0.2f", temp[i]);
                break;
            case 6:
                printf(" 7 - Julho - %0.2f", temp[i]);
                break;
            case 7:
                printf(" 8 - Agosto - %0.2f", temp[i]);
                break;
            case 8:
                printf(" 9 - Setembro - %0.2f", temp[i]);
                break;
            case 9:
                printf(" 10 - Outubro - %0.2f", temp[i]);
                break;
            case 10:
                printf(" 11 - Novembro - %0.2f", temp[i]);
                break;
            default: printf(" 12 - Dezembro - %0.2f", temp[i]);
                break;
                
            }
        
        }
    }
    
    
    return 0;

}