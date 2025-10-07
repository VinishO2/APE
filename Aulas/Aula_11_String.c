#include <stdio.h>
#include <string.h> // biblioteca do C para trabalhar com string

int main(){
    char nome [20];
    char sobrenome [50];
    char completo [100];

    printf("\n Digite seu nome: ");
    scanf("%s", nome);

    printf("\n Digite seu sobrenome: ");
    scanf("%s", sobrenome);

    strcpy(completo,nome); // copia da variavel nome
    strcat(completo," "); // concatena o espaço 
    strcat(completo,sobrenome); // Acrescenta o sobrenome
    
    printf("\n Priemeiro nome %s", nome);
    printf("\n Sobrenome %s", sobrenome);
    printf("\n Tamanho do nome %d", strlen(completo)); //le a quantidade de caracteres 

    //if (toupper((unsigned char)nome[0]) == "A") // toupper = coloca o caracter em maiusculo
    if (nome[0] == 'A' || nome[0] == 'a')
    {
        printf("\n Sim, seu nome comeca com A");
    } else {
        printf("\n Nao comeca com A");
    }
    
    printf("\n Seu nome completo e %s", completo);
    


    return 0;
}