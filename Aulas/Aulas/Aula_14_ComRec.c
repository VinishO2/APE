#include <stdio.h>
#include <locale.h>

int fatorialComRecursao(int n){
    if (n == 0 || n == 1)
    {
        return 1;
    } else {
        return n * fatorialComRecursao(n-1);
    }
    
}

int main(){
    system ("chcp 65001 > nul");
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int x;

    printf("Digite um numero: ");
    scanf("%d", &x);

    printf("\nO número digitado foi %d \n\n", x);

    printf("O resultado do fatorial desse número é %d \n", fatorialComRecursao(x));
    
    

return 0;
    
}