#include <stdio.h>
#include <locale.h>

void dobrarValorSemRetorno(int n){
    n = n * 2;
    printf("Dentro da função: %d\n", n);
}


int main(){
    system ("chcp 65001 > nul");
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int x = 5;
    dobrarValorComRetorno(x);
    printf("Fora da função: %d\n", x);

    return 0;
}