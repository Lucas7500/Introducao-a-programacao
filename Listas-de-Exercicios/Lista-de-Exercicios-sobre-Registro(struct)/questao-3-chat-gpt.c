#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 5

typedef struct
{
    char nome[50];
    char endereco[100];
    int telefone;
} dados;

int comparaString(const void *a, const void *b);

int main()
{
    dados pessoas[MAX];

    for (int i = 0; i < MAX; i++)
    {
        printf("%iª pessoa\n\n", i + 1);
        printf("Nome: ");
        scanf("%[^\n]%*c", pessoas[i].nome);
        printf("Endereço: ");
        scanf("%[^\n]%*c", pessoas[i].endereco);
        printf("Telefone: ");
        scanf("%i%*c", &pessoas[i].telefone);
        printf("\n");
    }

    qsort(pessoas, MAX, sizeof(dados), comparaString);

    printf("Dados das pessoas em ordem alfabética:\n");

    for (int i = 0; i < MAX; i++)
    {
        printf("\nNome: %s", pessoas[i].nome);
        printf("\nEndereço: %s", pessoas[i].endereco);
        printf("\nTelefone: %i", pessoas[i].telefone);
        printf("\n");
    }

    return 0;
}

int comparaString(const void *a, const void *b)
{
    const dados *p1 = (const dados *)a;
    const dados *p2 = (const dados *)b;

    return strcmp(p1->nome, p2->nome);
}
