#include <stdio.h>
#include <string.h>

//---------------------------------
// Função para converter frases para caixa alta
//---------------------------------
void paraCaixaAlta (char txt[]){ // void nao tem retorno, sobrescreve a variável
    for (int i = 0; txt[i] != '\0'; i++){ 
        txt[i] = toupper((unsigned char)txt[i]);
    }
}

int main(){
    char frase [1000];

    
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    printf("Minha frase original: %s\n", frase);

    //chamada da função
    paraCaixaAlta(frase);
    
        
    printf("Minha frase em caixa alta: %s\n", frase);
    


    return 0;
}