#include <stdio.h>

int main(){

    int contador=0;

    while(contador<=100000000000000){
        printf("Sala %d\n", (2 * contador) + 1);
        contador = contador + 1; // contador = contador + 1
        
    }

    return 0;
}