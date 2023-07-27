// 5. Definir a estrutura cuja representação gráfica é dada a seguir, definir os campos com os tipos básicos
// necessários.
// https://prnt.sc/hwFMOsgIouY-
// a) Crie um vetor Cadastro com 5 elementos.
// b) Permita ao usuário entrar com dados para preencher esse 5 cadastros.
// c) Encontre a pessoa com maior idade entre os cadastrados
// d) Encontre as pessoas do sexo masculino.
// e) Encontre as pessoas com salário maior que 2000.
// f) Imprima os dados da pessoa cuja identidade seja igual a um valor fornecido pelo usuário.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

typedef struct
{
    char rua[30];
    char bairro[30];
    char cidade[30];
    char estado[30];
    int CEP;
} Endereco;

typedef struct
{
    char nome[30];
    Endereco endereco;
    float salario;
    int identidade;
    int CPF;
    char estadoCivil;
    int telefone;
    int idade;
    char sexo;
} Cadastro;

#define tamVet 1

int main()
{
    // a)
    Cadastro cadastro[tamVet];
    int maiorIdade = 0;
    char pMaiorIdade[30];

    // b)
    for (int i = 0; i < tamVet; i++)
    {
        printf("Cadastro %d\n", i + 1);

        printf("Nome: ");
        scanf("%[^\n]", cadastro[i].nome);

        printf("Identidade: ");
        scanf("%d%*c", &cadastro[i].identidade);

        printf("\n");

        printf("Endereco\n");
        printf("Rua: ");
        scanf("%[^\n]%*c", cadastro[i].endereco.rua);
        printf("Bairro: ");
        scanf("%[^\n]%*c", cadastro[i].endereco.bairro);
        printf("Cidade: ");
        scanf("%[^\n]%*c", cadastro[i].endereco.cidade);
        printf("Estado: ");
        scanf("%[^\n]%*c", cadastro[i].endereco.estado);
        printf("CEP: ");
        scanf("%d%*c", &cadastro[i].endereco.CEP);

        printf("Salario: ");
        scanf("%f%*c", &cadastro[i].salario);

        printf("CPF: ");
        scanf("%d%*c", &cadastro[i].CPF);

        printf("Estado Civil (S/N/C): ");
        scanf("%c%*c", &cadastro[i].estadoCivil);

        printf("Telefone: ");
        scanf("%d%*c", &cadastro[i].telefone);

        printf("Idade: ");
        scanf("%d%*c", &cadastro[i].idade);

        // c)
        if (cadastro[i].idade > maiorIdade)
        {
            maiorIdade = cadastro[i].idade;
            strcpy(pMaiorIdade, cadastro[i].nome);
        }

        printf("Sexo (M/F): ");
        scanf("%c%*c", &cadastro[i].sexo);

        printf("\n");
    }

    // d)
    printf("As pessoas do sexo masculino sao:\n");

    for (int i = 0; i < tamVet; i++)
    {
        if (toupper(cadastro[i].sexo) == 'M')
        {
            printf("%s\n", cadastro[i].nome);
        }
    }

    printf("\n");

    // e)
    printf("As pessoas com salario maior que 2000 sao:\n");

    for (int i = 0; i < tamVet; i++)
    {
        if (cadastro[i].salario > 2000)
        {
            printf("%s\n", cadastro[i].nome);
        }
    }

    printf("\n");

    // f)
    int id, pessoaExiste = 0;

    printf("Identidade: ");
    scanf("%d", &id);

    for (int i = 0; i < tamVet; i++)
    {
        if (cadastro[i].identidade == id)
        {
            printf("Nome: %s\n\n", cadastro[i].nome);
            printf("Identidade: %d\n", cadastro[i].identidade);

            printf("Endereco\n");
            printf("Rua: %s\n", cadastro[i].endereco.rua);
            printf("Bairro: %s\n", cadastro[i].endereco.bairro);
            printf("Cidade: %s\n", cadastro[i].endereco.cidade);
            printf("Estado: %s\n", cadastro[i].endereco.estado);
            printf("CEP: %d\n\n", cadastro[i].endereco.CEP);

            printf("Salario: %.2f\n", cadastro[i].salario);
            printf("CPF: %d\n", cadastro[i].CPF);
            printf("Estado Civil (S/N/C): %c\n", toupper(cadastro[i].estadoCivil));
            printf("Telefone: %d\n", cadastro[i].telefone);
            printf("Idade: %d\n", cadastro[i].idade);
            printf("Sexo (M/F): %c\n", cadastro[i].sexo);

            printf("\n");
        }
    }

    return 0;
}