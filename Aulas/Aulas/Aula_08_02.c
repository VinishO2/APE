#include <stdio.h>

int main(){
    int idade = idade > 0 && idade < 120;
    
     do
     {
        printf("Digite sua idade: ");
        scanf("%d", &idade);
        if (idade <0 || idade >120)
        {
            printf("idade Invalida, tente novamente \n");
        }
    
     } while (idade <0 || idade >120);
    
    printf("Idade valida: %d \n", idade);

    return 0;
}