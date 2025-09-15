#include <stdio.h>

int main(){
    int num;
	int ct = 0;
	int maxNum;
	float soma = 0;
	float media;
	
	
    do
    {
        printf("Digite um numero inteiro: ");
        scanf("%d", &num);
        if(num !=0){
        	ct = ct + 1;
		}
		
		if(num > maxNum){
			maxNum = num;
		}
		
		soma = soma + num;
		
		media = soma / ct;

    } while (num != 0);
    
    printf("%d \n%d \n%f", ct, maxNum, media);
    
	
    return 0;
    
}
