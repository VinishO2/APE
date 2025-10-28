#include <stdio.h>


int main(){
    int x = 10, y = 20, z = 15;
    int *p, *p2, *p3; // *p indica o endereço onde está armazenado a variavel

    p = &x; // p recebe o endereço de x
    p2 = &y;
    p3 = &z;

    printf("Valor de x: %d\n", x);
    printf("Endereco de x: %p\n", &x); // %p imprime valor do endereço de memoria
    printf("Valor armazenado em p: %p\n", p); // sem o * -> mostra o endereço de memoria de p 
    printf("Valor apontado por p: %d\n", *p); // com o * -> aponta o conteudo de P 
    printf("Tamanho do int %d\n", sizeof(x));

    printf("Valor de x: %d\n", y);
    printf("Endereco de x: %p\n", &y);
    printf("Valor armazenado em p: %p\n", p2);
    printf("Valor apontado por p: %d\n", *p2);

    printf("Valor de x: %d\n", z);
    printf("Endereco de x: %p\n", &z);
    printf("Valor armazenado em p: %p\n", p3);
    printf("Valor apontado por p: %d\n", *p3);

    return 0;

}