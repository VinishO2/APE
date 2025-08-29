#include <stdio.h>

int main(){
	int idade;
	int cat;
	int faixa;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	printf("Digite sua categoria (1- Atleta, 2- Amador, 3- Profissional): ");
	scanf("%d", &cat);
	
	if(idade >=0 && idade <=120){
		printf("Idade Valida \n");
		if (idade >=0 && idade <=12){
			switch (cat){
				case 1: 
					printf("Sua inscricao e: Atleta Infantil");
					break;
				case 2:
					printf("Sua inscricao e: Amador Infantil");
					break;
				case 3:
					printf("Sua inscricao e: Profissional Infantil");
					break;
				default:
					printf("Categoria invalida");
					break;
			}
		} else if (idade>=13 && idade <=17){
			switch (cat){
				case 1: 
					printf("Sua inscricao e: Atleta Juvenil");
					break;
				case 2:
					printf("Sua inscricao e: Amador Juvenil");
					break;
				case 3:
					printf("Sua inscricao e: Profissional Juvenil");
					break;
				default:
					printf("Categoria invalida");
					break;
			} 
		}else if (idade >=18 && idade <=59){
			switch (cat){
				case 1: 
					printf("Sua inscricao e: Atleta Adulto");
					break;
				case 2:
					printf("Sua inscricao e: Amador Adulto");
					break;
				case 3:
					printf("Sua inscricao e: Profissional Adulto");
					break;
				default:
					printf("Categoria invalida");
					break;
			} 
		}else if (idade >=60){
			switch (cat){
				case 1: 
					printf("Sua inscricao e: Atleta Senior");
					break;
				case 2:
					printf("Sua inscricao e: Amador Senior");
					break;
				case 3:
					printf("Sua inscricao e: Profissional Senior");
					break;
				default:
					printf("Categoria invalida");
					break;
			}
		} 
	}else{
		printf("Idade Invalida");
	}
	
return 0;
}
