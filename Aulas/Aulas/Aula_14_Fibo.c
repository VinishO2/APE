#include <stdio.h>
#include <locale.h>

int fibo(int n){
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibo(n-1) + fibo (n-2); // n é a posição do fibo
    
}

int main(){
    system ("chcp 65001 > nul");
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    printf("Fibonacci é %d\n", fibo(num));
    

return 0;
    
}