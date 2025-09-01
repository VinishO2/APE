#include <stdio.h>
#include <string.h>

int main(){
	int idade;
	int cat;
	char tipo_categoria[10]; //define uma string com 8 caract
	char msg[35]; //define o tamanho da mensagem
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	printf("Digite sua categoria (1- Atleta, 2- Amador, 3- Profissional): ");
	scanf("%d", &cat);
	
	if(idade >=0 && idade <=120){
		printf("Idade Valida \n");
		if (idade >=0 && idade <=12){

			strcpy (tipo_categoria, "Infantil"); //copia o tipo de categoria com base na idade

		} else if (idade>=13 && idade <=17){

			strcpy (tipo_categoria, "Juvenil");

		} else if (idade >=18 && idade <=59){

			strcpy (tipo_categoria, "Adulto");

		} else if (idade >=60){

			strcpy (tipo_categoria, "Senior");

		}

		switch (cat){
				case 1:
					strcpy (msg, "Sua inscricao e: Atleta ");
					break;
				case 2:
					strcpy (msg, "Sua inscricao e: Amador ");
					break;
				case 3:
					strcpy (msg, "Sua inscricao e: Profissional ");
					break;
				default:
					strcpy (msg, "Categoria Invalida ");
					break;
			}

	}else{
		printf("Idade Invalida");
	}

	strcat (msg, tipo_categoria); //concatena as informacoes das variaveis
	puts (msg); //junta a concatenacao em uma só mensagem
return 0;
}
