#include <stdio.h>
#define TAM 11

int main(){

	int vet[TAM];
	int num, menorNum, i, c;
	
	
		printf("Insira 10 numemos: ");
    	scanf("%d", &num);
    	
	for (i = 0; i < TAM - 1; i++){
		
        menorNum = i;
		for (c = i+1; c < TAM; c++){
			if(vet[c] < vet[menorNum]){
				menorNum = c;
			}
	    }
        num = vet[i];
        vet[i] = vet[menorNum];
        vet[menorNum] = num;
	}
	
	printf("Os numeros ordenados sao: %d", num);
	
    return 0;
}