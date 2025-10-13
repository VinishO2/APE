#include <stdio.h>
#include <string.h>

int main(){

    char frase [1000];

    do
    {
        printf("Digite uma frase: ");
        fgets(frase, sizeof(frase), stdin);
        printf("Minha frase original: %s\n", frase);
        
        for (int i = 0; frase[i] != '\0'; i++){ // \0 diz que a string chegou ao fim
            frase[i] = toupper((unsigned char)frase[i]); // unsigned char - para garantir que vai pegar so caracter // toupper só aumenta o primeiro caracter
            
        }
        
        printf("Minha frase em caixa alta: %s\n", frase);
    } while (1);


    return 0;
}