#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

typedef struct Aluno
{
    int mat;
    char nome[100];
    char curso[30];
} Aluno;

// Obtem nome do arquivo
void lerNomeArquivo(char[]);

// Grava dados no arquivo
void gravarArquivo(char[]);

// Lê dados do arquivo e imprime seu conteúdo na tela
void imprimirArquivo(char[]);

int main(void)
{
    char nomeArq[128];
    char opcao;

    do
    {
        printf("Escrita e leitura de arquivo em formato CSV\n\n");
        printf("1. Imprimir conteudo do arquivo\n");
        printf("2. Gravar conteudo no arquivo\n");
        printf("3. Sair\n");

        opcao = getch();

        switch (opcao)
        {
        case '1':
            lerNomeArquivo(nomeArq);
            imprimirArquivo(nomeArq);
            break;

        case '2':
            lerNomeArquivo(nomeArq);
            gravarArquivo(nomeArq);
            break;

        case '3':
            break;

        default:
            printf("Opcao invalida!\n");
        }
    } while (opcao != '3');
}

void lerNomeArquivo(char nomeArq[])
{
    printf("Nome do arquivo (incluir extensao \'csv\'): ");
    scanf("%s", nomeArq);
}

void gravarArquivo(char nomeArq[])
{
    Aluno vetAlunos[] = {{2022010, "Dave Guimaraes Neto", "BCC"}, {2020200, "Isabela Dela Savia", "BSI"}, {2021003, "Marluce Helter", "BES"}, {2023040, "Roberto Goncalves da Silva", "BSI"}};
    int tamAlunos = sizeof(vetAlunos) / sizeof(vetAlunos[0]);
    int i, j, tamString;

    FILE *arq = fopen(nomeArq, "w");
    if (arq == NULL)
    {
        printf("Erro ao criar arquivo\n");
        system("pause > nul");
        return;
    }
    fprintf(arq, "%s%c%s%c%s\n", "MATRIC.", ',', "NOME", ',', "CURSO");

    for (i = 0; i < tamAlunos; i++)
    {
        fprintf(arq, "%d", vetAlunos[i].mat);
        fprintf(arq, "%c", ',');

        tamString = strlen(vetAlunos[i].nome);
        for (j = 0; j < tamString; j++)
        {
            fprintf(arq, "%c", vetAlunos[i].nome[j]);
        }
        fprintf(arq, "%c", ',');
        tamString = strlen(vetAlunos[i].curso);
        for (j = 0; j < tamString; j++)
        {
            fprintf(arq, "%c", vetAlunos[i].curso[j]);
        }
        fprintf(arq, "%c", '\n');
    }
    fclose(arq);
}

void imprimirArquivo(char nomeArq[])
{
    FILE *fp;
    char nome[100];
    char mat[30];
    char curso[5];
    char virgula;

    // char linhaComTitulosDasCols[200];
    char nomeCol1[20], nomeCol2[20], nomeCol3[20];

    fp = fopen(nomeArq, "r");

    printf("\n");

    if (fp == NULL)
    {
        printf("Arquivo %s nao existe!\n", nomeArq);
        system("pause > nul");
        return;
    }

    fscanf(fp, "%[^,],%[^,],%[^\n]", nomeCol1, nomeCol2, nomeCol3);
    printf("%-10s%-40s%-4s", nomeCol1, nomeCol2, nomeCol3);

    while (!feof(fp))
    {
        // Leitura de cada linha do arquivo e armazenamento em vari�veis distintas
        fscanf(fp, "%[^,],%[^,],%[^\n]", mat, nome, curso);

        if (feof(fp))
            break;

        printf("%-11s%-40s%-4s", mat, nome, curso);
    }

    fclose(fp);
    system("cls");
}
