#include <stdio.h>
#include <locale.h>

void dobrarValorSemRetorno(int n){
    n = n * 2;
    printf("Dentro da função: %d\n", n);
}

int dobrarValorComRetorno(int n){
    n = n * 2;
    //printf ("Dentro da funcao: %d\n", n);
    return n;
}

int main(){
    system ("chcp 65001 > nul");
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int x = 5;
    dobrarValorComRetorno(x);
    printf("Fora da função: %d\n", x);
    printf("Valor retornado da função é %d", dobrarValorComRetorno(x));

    return 0;
}