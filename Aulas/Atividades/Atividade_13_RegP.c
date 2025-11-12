#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define TAM 2

struct pessoa
{
    char nome[100];
    int ano_nascimento;
    char sexo;
    float altura;
    float peso;
    double cpf;
    
};

void cadastrar(){
    int i;
    struct pessoa lista[TAM];
    FILE *f = fopen("pessoas.dat", "wb"); // write binary
    if (f == NULL)
    {
        printf("Erro ao abrir o arquivo!\n");
        return; 
    }

    for (i = 0; i < TAM; i++)
    {
        printf("\nDigite o nome: ");
        fflush(stdin);
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

    fwrite(lista, sizeof(struct pessoa), TAM, f);
    
    fclose(f);
    printf("Dados salvos com sucesso!\n");
}

void listar(){
    FILE *f = fopen("pessoas.dat", "rb"); // read binary
    if (f == NULL)
    {
        printf("Nenhum cadastro encontrado");
        return;
    }
    
    struct pessoa p;
    
    while (fread(&p, sizeof(struct pessoa), 1, f) == 1){
        printf ("\n------------------");
        printf ("\nNome: %s", p.nome);
        printf ("\nAno de Nascimento: %d", p.ano_nascimento);
        printf ("\nSexo: %c", p.sexo);
        printf ("\nAltura: %.2fcm", p.altura);
        printf ("\nPeso: %.2fkg", p.peso);
        printf ("\nCPF: %.0lf\n", p.cpf);  // %.0lf - sem casas decimais // %lf - double
        printf ("------------------\n");
        
    }

    fclose(f);
}

int main (){
    system ("chcp 65001 > nul");
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int menu;
do
{
    printf("--------- Menu ---------\n");
    printf("Digite 1 - Cadastrar Pessoa, 2 - Listar Pessoas, 3 - Sair \n");
    scanf("%d", &menu);
    fflush(stdin);

    switch (menu)
    {
    case 1:
        
        cadastrar();
        
        break;
    
    case 2:

        listar();
        break;

    case 3:

        printf("\nSaindo");
        break;

    default:
        printf("Opção Inválida");
        break;
    }
} while (menu != 3);

return 0;
}