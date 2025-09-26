#include <stdio.h>
#define TAM 3

int main(){

	int vet[TAM];
	int num, menorNum, i, c;
	
	for (i = 0; i < TAM; i++){
		
        printf("Insira 10 numemos: ");
    	scanf("%d", num);
    
    }

    printf("Os numeros ordenados sao: ");
    menorNum = i;
    for (c = i + 1; c < TAM; c++){
        if (vet[c] < vet[menorNum]){
            menorNum = c;
        }
        printf("%d", c);

        /*vet[i] = num;
        num = vet[menorNum];
        vet[menorNum] = vet[i];*/
    }


    
		/* for (c = i+1; c < TAM; c++){
			if(vet[c] < vet[menorNum]){
				menorNum = c;
			}
	    }*/
    return 0;
}