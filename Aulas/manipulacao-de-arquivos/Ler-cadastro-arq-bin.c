#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno
{
    char nome[100];
    int RA;
} Aluno;

// Função que imprime conteúdo do arquivo com cadastro
void imprimeArquivo(char nomeArq[]);

int main(void)
{
    char nomeArq[] = "alunos.bin";
    FILE *arq = fopen(nomeArq, "rb");

    if (arq == NULL)
    {
        printf("Erro ao criar arquivo\n");
        return 1;
    }

    imprimeArquivo(nomeArq);
}

void imprimeArquivo(char nomeArq[])
{
    FILE *arq = fopen(nomeArq, "r+b");
    Aluno aux;

    if (arq == NULL)
    {
        printf("Arquivo nao existe!\n");
        return;
    }

    printf("-----Dados do Arquivo------\n");
    while (fread(&aux, sizeof(Aluno), 1, arq) != 0)
    {
        printf("Nome: %s, RA: %d\n", aux.nome, aux.RA);
    }
    printf("\n");

    fclose(arq);
}
