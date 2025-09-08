#include <stdio.h>

int main(){
    int num;
    int multi = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    while (multi <=9)
    {
        multi = multi + 1;
        printf("A tabuada e: %d X %d = %d \n", num, multi, (num * multi));


    }
    
    return 0;
}