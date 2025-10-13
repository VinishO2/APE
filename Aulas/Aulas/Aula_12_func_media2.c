#include <stdio.h>
#include <math.h>

//Função de cálculo da média sem ser generica
float pitagoras(float v1, float v2){ //função do tipo float - passa os parametros e retorna os valores

    return sqrt(pow(v1,2) + pow(v2,2));

}

int main(){

    float a,b,c;

    printf("Digite o valor do lado a: ");
    scanf("%f", &a);
    printf("Digite o valor do lado b: ");
    scanf("%f", &b);
    

   c = pitagoras(a,b);

    printf("A media do lado c: %0.2f\n", c);

    return 0; 
}