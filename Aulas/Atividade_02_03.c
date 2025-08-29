#include <stdio.h>

int main(){
    int idade;
    int cat;
    char et;

    printf ("Digite sua idade: ");
    scanf("%d", &idade);

    printf ("Digite sua categoria (1- Atleta; 2- Amador; 3- Profissional): ");
    scanf ("%d", &cat);

    if (idade >0 <=120){
        printf("Idade valida");
            if(idade <= 12){
                scanf("%s", &et);
            } else if (idade >=13 <=17){
                scanf("%s", &et);
            } else if (idade >=18 <=59){
                scanf("%s", &et);
            } else if (idade >=60){
                scanf("%s", &et);}

    return 0;
}