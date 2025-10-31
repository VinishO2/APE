#include <stdio.h>
#include <locale.h>

int fatorialSemRecursao(int n){
    int fat = 1;
        
        for (int i = 1; i <= n; i++)
        {
            fat =  fat * i;
            //fat *= i;        
        }
    
    return fat;
}

int main(){
    system ("chcp 65001 > nul");
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int x;

    printf("Digite um numero: \n");
    scanf("%d", &x);

    printf("O número digitado foi %d \n\n", x);

    printf("O resultado do fatorial desse número é %d \n", fatorialSemRecursao(x));
    
    

return 0;
    
}