#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno
{
    char nome[100];
    int RA;
} Aluno;

// Função que imprime conteúdo do arquivo com cadastro
void imprimeArquivo(char nomeArq[]);
// Função que atualiza cadastro
void alteraNome(char nomeArq[], int ra, char nome[]); // Função que atualiza um

int main(void)
{
    char nomeArq[] = "alunos.bin";
    Aluno alunos[] = {{"Batata", 1}, {"Isa", 2}, {"Malu", 3}, {"Beto", 4}};
    FILE *arq = fopen(nomeArq, "w+b");

    if (arq == NULL)
    {
        printf("Erro ao criar arquivo\n");
        return 1;
    }
    fwrite(alunos, sizeof(Aluno), 4, arq);
    fclose(arq);

    imprimeArquivo(nomeArq);
    // Apos criado o arquivo com o cadastro, ele ser� alterado conforme abaixo
    alteraNome(nomeArq, 2, "Isabela");
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

void alteraNome(char nomeArq[], int ra, char nome[])
{
    FILE *arq = fopen(nomeArq, "r+b");
    Aluno aux;
    int achou = 0;
    if (arq == NULL)
    {
        printf("Arquivo nao existe!\n");
        return;
    }

    while (fread(&aux, sizeof(Aluno), 1, arq) != 0)
    {
        if (aux.RA == ra)
        {
            achou = 1;
            break;
        }
    }

    // Volta uma posição para sobrescrever registro
    if (achou)
    {
        fseek(arq, -1 * sizeof(Aluno), SEEK_CUR);
        strcpy(aux.nome, nome); // atualiza o nome
        fwrite(&aux, sizeof(Aluno), 1, arq);
    }
    fclose(arq);
}
