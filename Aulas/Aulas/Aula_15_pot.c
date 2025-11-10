#include <stdio.h>
#include <locale.h>

int potencia (int b, int e){
    if(e == 0) return 1;
    
    return b * potencia (b, e-1);
    
}

int main(){
    system ("chcp 65001 > nul");
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int base, pot, resultado;

    printf("Insira uma base: ");
    scanf("%d", &base);

    printf("Insira uma potência: ");
    scanf("%d", &pot);

    resultado = potencia(base, pot);

    printf("O resultado da potenciação é %d", resultado);



    return 0;
}