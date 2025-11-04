#include <stdio.h>
#include <locale.h>
#include <string.h>

void invertido(char *n){

    if (*n == '\0') return;

    invertido(n + 1);
    putchar(*n);
}

int main(void){
    system ("chcp 65001 > nul");
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char x [1000];

    printf("Digite alguma coisa: ");
    scanf("%s", &x);

    invertido(x);


return 0;
}