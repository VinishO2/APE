#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define TAM 5


struct pessoa
{
    char nome[100];
    int ano_nascimento;
    char sexo;
    float altura;
    float peso;
    double cpf;
    
};

int main (){
    system ("chcp 65001 > nul");
    setlocale(LC_ALL, "pt_BR.UTF-8");

    struct pessoa lista[TAM];
    int i;

    for (i = 0; i < TAM; i++)
    {
        printf ("\n----- Pessoa %d -----\n", i + 1);

        printf("\nDigite o nome: ");
        scanf (" %[^\n]s", lista[i].nome); // [^\n]s - Lê string com espaços 
        //fgets(lista[i].nome, sizeof(lista[i].nome), stdin);

        printf("Digite o ano de nascimento: ");
        scanf ("%d", &lista[i].ano_nascimento);

        printf("Digite o sexo (M ou F): ");
        scanf (" %c", &lista[i].sexo);

        printf("Digite a altura: ");
        scanf ("%f", &lista[i].altura);

        printf("Digite o peso: ");
        scanf ("%f", &lista[i].peso);

        printf("Digite o CPF: ");
        scanf ("%lf", &lista[i].cpf); // %.0lf - sem casas decimais // %lf - double
    }

    printf ("\n\n----- Dados -----\n");
    for (i = 0; i < TAM; i++)
    {
        printf ("\n------------------");
        printf ("\nNome: %s", lista[i].nome);
        printf ("\nAno de Nascimento: %d", lista[i].ano_nascimento);
        printf ("\nSexo: %c", lista[i].sexo);
        printf ("\nAltura: %.2fcm", lista[i].altura);
        printf ("\nPeso: %.2fkg", lista[i].peso);
        printf ("\nCPF: %.0lf\n", lista[i].cpf);  // %.0lf - sem casas decimais // %lf - double
        
    }
    printf ("------------------\n");

    return 0;

}
