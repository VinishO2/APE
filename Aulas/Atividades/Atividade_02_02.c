#include <stdio.h>

int main(){
    int l1;
    int l2;
    int l3;

    printf ("Digite um lado: ");
    scanf ("%d", &l1);

    printf ("Digite outro lado: ");
    scanf ("%d", &l2);

    printf ("Digite o terceiro lado: ");
    scanf ("%d", &l3);


    if (l1 < l2 + l3 == 1 && l2 < l1 + l3 == 1 && l3 < l1 + l2 == 1){
        printf("E triangulo! \n");
        if (l1 == l2 && l2 == l3){
            printf("E Equilatero! \n");
            } else if (l1 == l2 && l2 != l3 || l1 != l2 && l2 == l3 || l1 == l3){
            printf("E Isosceles! \n");
            } else if (l1 != l2 && l2 != l3 && l1 != l3){
            printf ("E Escaleno! \n");
            } 
        } else {
        printf ("Nao e triangulo! \n");  
        
        }
    return 0;
}