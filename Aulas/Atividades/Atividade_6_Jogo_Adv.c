#include <stdio.h>

int main(){
    int num = 15;
    
    do
    {
    	printf ("Adivinhe qual o numero secreto: ");
    	scanf("%d", &num);
    	
        if (num > 15)
        {
            printf("O numero correto e menor \n");
        } else if (num < 15)
        {
            printf("O numero correto e maior \n");
        }
        
    } while (num != 15);

    printf("Parabens! Voce acertou o numero");

    return 0;
    
}
